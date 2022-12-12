#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return solve(nums,target);
    }

    int solve(vector<int>& nums, int target)
    {
        int temp,temp2,temp3;
        temp=binarySearch(nums,target);
        if(temp==-1){temp2=ifNotFoundBinarySearchNext(nums,target);}
        else{return temp;}
        if(temp2==-1){temp3=ifNotFoundBinarySearchPrev(nums,target);}
        else{return temp2;}
        return temp3+1;
    }

    int binarySearch(vector<int>& nums, int target)
    {
        int start=0,End=nums.size()-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]==target){return mid;}
            else if(nums[mid]<target){start=mid+1;}
            else if(nums[mid]>target){End=mid-1;}
        }
        return -1;
    }

    int ifNotFoundBinarySearchNext(vector<int>& nums, int target)
    {
        int ans=-1;
        int start=0,End=nums.size()-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]<target){start=mid+1;}
            else if(nums[mid]>target){End=mid-1; ans=mid;}
        }
        return ans;
    }

    int ifNotFoundBinarySearchPrev(vector<int>& nums, int target)
    {
        int ans=-1;
        int start=0,End=nums.size()-1;
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(nums[mid]<target){start=mid+1;  ans=mid;}
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
    cout<<s.searchInsert(v,target);
}




