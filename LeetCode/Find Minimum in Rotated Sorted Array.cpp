#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int pivot=findPivot(nums,n);
        return nums[pivot];
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
};


int main()
{
    vector<int> v;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    cout<<s.findMin(v);
}
