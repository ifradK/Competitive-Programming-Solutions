#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        int pivot=findPivot(nums,n);
        return solve(nums,pivot,target,n);
    }

    int solve(vector<int>& nums, int pivot, int target, int n)
    {
        int temp1=binarysearch(nums, 0, pivot-1, target);
        int temp2=binarysearch(nums, pivot, n-1, target);
        int ans=-1;
        temp1==-1? ans=temp2 : ans=temp1;

        return ans;
    }

    int findPivot(vector<int>& nums, int n)
    {
        if (n==1 || nums[0] < nums[n-1]){return 0;}
        int start=0, End=n-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if (mid<n-1 && nums[mid]>nums[mid+1]){return (mid + 1);}
            else if (nums[start] <= nums[mid]){start=mid+1;}
            else{End=mid-1;}
        }
        return 0;
    }

    int binarysearch(vector<int>& nums, int start, int End, int val)
    {
        while(start<=End)
        {
            int middle=(start+End)/2;
            if(nums[middle]==val){return middle;}
            else if(nums[middle]>val){End=middle-1;}
            else if(nums[middle]<val){start=middle+1;}
        }
        return -1;
    }
};


int main()
{
    vector<int> v;
    int target,n,a;
    cin>>n>>target;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    cout<<s.search(v, target);
}


/*
7 0
4 5 6 7 0 1 2
*/
