#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return solve(nums, nums.size());
    }

    int solve(vector<int>& nums, int n)
    {
        int low=0, high=n-1;
        if(n==1){return 0;}
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid>0 && mid<n-1)
            {
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){return mid;}
                else if(nums[mid-1]>nums[mid]){high=mid-1;}
                else{low=mid+1;}
            }
            else if(mid==0)
            {
                if(nums[0]>nums[1]){return 0;}
                else{return 1;}
            }
            else if(mid==n-1)
            {
                if(nums[n-1]>nums[n-2]){return n-1;}
                else{return n-2;}
            }
        }
        return -1;
    }
};

int main()
{
    int a,m;
    cin>>m;
    vector<int> v;
    for(int j=0; j<m; j++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    cout<<s.findPeakElement(v);
}





