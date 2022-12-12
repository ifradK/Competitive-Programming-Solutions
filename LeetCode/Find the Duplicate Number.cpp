#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        return solve(nums);
    }

    int solve(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            int temp=binarySearch(nums,nums[i],i);
            if(temp!=-1){return temp;}
        }
    }

    int binarySearch(vector<int>& nums, int target, int idx)
    {
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]==target && mid!=idx){return nums[mid];}
            else if(nums[mid]==target && mid==idx){return nums[mid];}
            else if(nums[mid]<target){start=mid+1;}
            else if(nums[mid]>target){End=mid-1;}
        }
        return -1;
    }
};

int main()
{
    int n,a,m;
    cin>>m;
    vector<int> v;
    for(int j=0; j<m; j++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.findDuplicate(v);
}



