#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        return solve(nums, k);
    }

    vector<int> solve(vector<int>& nums, int k)
    {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){mp[nums[i]]++;}
        vector<int> v;
        multimap<int, int> mp1;
        for(auto it=mp.begin();it!=mp.end();it++){mp1.insert({it->second,it->first});}
        for(auto it=mp1.rbegin();it!=mp1.rend();it++)
        {
            if(k==0){break;}
            v.push_back(it->second);
            k--;
        }
        return v;
    }
};

int main()
{
    int n,a,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.topKFrequent(v,k);
}

/*
6 2
2 2 2 4 4 3
*/



