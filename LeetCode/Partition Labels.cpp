#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        return solve(s,s.size());
    }

    vector<int> solve(string s, int n)
    {
        vector<int> v;
        int right=n, left=0;
        while(1)
        {
            bool flag=false;
            if(left==n){break;}

            for(int i=left; i<n; i++)
            {
                if(s[i]!='*')
                {
                    if(s[left]==s[i])
                    {
                        right=i;
                        if(left!=i){s[i]='*';flag=true;}
                    }
                }
            }

            if(!flag)
            {
                v.push_back(1);
                left=right+1;
            }
            else
            {
                for(int i=left+1;i<right;i++)
                {
                    if(s[i]!='*')
                    {
                        for(int j=right+1;j<n;j++)
                        {
                            if(s[i]==s[j])
                            {
                                right=j;
                                if(i!=j){s[j]='*';}
                            }
                        }
                    }
                }
                v.push_back(right-left+1);
                left=right+1;
            }
        }
        return v;
    }
};

int main()
{
    string n;
    cin>>n;
    Solution s;
    s.partitionLabels(n);
}

/*
abaacdefapbcmno
*/






