#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int total=1;
        bool flag=false,flag1=false;
        for(int i=0; i<nums.size(); i++)
        {
            if(flag && nums[i]==0){flag1=true;}
            else if(nums[i]==0){flag=true;}
            else{total=total*nums[i];}
        }
        if(flag1)
        {
            for(int i=0; i<nums.size(); i++){v.push_back(0);}
        }
        else if(flag)
        {
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]==0){v.push_back(total);}
                else{v.push_back(0);}
            }
        }
        else
        {
            for(int i=0; i<nums.size(); i++){v.push_back(total/nums[i]);}
        }

        return v;
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.productExceptSelf(v);
}







