#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        return solve(s);
    }

    int solve(string s)
    {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i,k=i; j<s.size() && k>=0; j++,k--)
            {
                if(s[j]==s[k]){cnt++;}
                else{break;}
            }
        }

        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=i+1,k=i; j<s.size() && k>=0; j++,k--)
            {
                if(s[j]==s[k]){cnt++;}
                else{break;}
            }
        }
        return cnt;
    }
};


int main()
{
    string n;
    cin>>n;
    Solution s;
    cout<<s.countSubstrings(n);
}

//fdsklf


