#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

//O(N) SOLUTION
class Solution {
public:
    int maxSubArray(int nums[], int n) {
        return solve(nums,n);
    }

    int solve(int nums[], int n)
    {
        int sum=0,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            mx=max(mx,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
};


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    Solution m;
    cout<<m.maxSubArray(arr,n)<<endl;
}

/*
9
-2 1 -3 4 -1 2 1 -5 4
*/

/*
LEETCODE VERSION O(N)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,n);
    }

    int solve(vector<int>& nums, int n)
    {
        int sum=0,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            mx=max(mx,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
};
*/


// DIVIDE AND CONQUER SOLUTION (BUGS)
//class Solution {
//public:
//    int maxSubArray(int nums[], int n) {
//        return solve(nums,n,0,n-1);
//    }
//
//    int solve(int nums[], int n, int start, int End)
//    {
//        if(n==1){return nums[0];}
//
//        int mid=n/2;
//        int right=solve(nums,mid,start,mid);
//        int left=solve(nums,n-mid,mid+1,End);
//
//        int right_sum=INT_MIN, left_sum=INT_MIN, sum=0;
//        for(int i=start;i<=mid;i++)
//        {
//            sum=sum+nums[i];
//            left_sum=max(left_sum,sum);
//        }
//        sum=0;
//        for(int i=mid+1;i<=End;i++)
//        {
//            sum=sum+nums[i];
//            right_sum=max(right_sum,sum);
//        }
//        int ans=max(max(right,left),left_sum+right_sum);
//        return ans;
//    }
//};
