#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

vector<string> v;
string s="";
stack<string> st;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        v.clear();
        while(!st.empty()){st.pop();}
        s="";
        solve(n,0,0);
        return v;
    }

    void solve(int n, int open, int close)
    {
        if(open==n && close==n)
        {
            v.push_back(s);
            if(st.size()>0){s=st.top();st.pop();}
            else{s="";}
            return;
        }
        if(open!=n && close<open)
        {
            st.push(s);
        }
        if(open<n)
        {
            s=s+"(";
            solve(n,open+1,close);
        }
        if(close<open)
        {
            s=s+")";
            solve(n,open,close+1);
        }
    }
};


int main()
{
    int n;
    cin>>n;
    Solution s;
    s.generateParenthesis(n);
    for(int i=0;i<v.size();i++){cout<<v[i]<<endl;}
}


