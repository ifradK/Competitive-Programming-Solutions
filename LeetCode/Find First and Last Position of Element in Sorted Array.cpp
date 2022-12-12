#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(first(nums,target));
        v.push_back(last(nums,target));
        //cout<<"HERE "<<v[0]<<" "<<v[1]<<endl;
        return v;
    }

    int first(vector<int>& nums, int target)
    {
        int ans=-1;
        int start=0, End=nums.size()-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]==target)
            {
                End=mid-1;
                ans=mid;
            }
            else if(nums[mid]<target){start=mid+1;}
            else if(nums[mid]>target){End=mid-1;}
        }
        return ans;
    }

    int last(vector<int>& nums, int target)
    {
        int ans=-1;
        int start=0, End=nums.size()-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]==target)
            {
                start=mid+1;
                ans=mid;
            }
            else if(nums[mid]<target){start=mid+1;}
            else if(nums[mid]>target){End=mid-1;}
        }
        return ans;
    }
};

int main()
{
    int n,a,m,target;
    cin>>m>>target;
    vector<int> v;
    for(int j=0; j<m; j++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.searchRange(v,target);
}


