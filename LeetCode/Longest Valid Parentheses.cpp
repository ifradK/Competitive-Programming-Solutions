#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        return solve(s);
    }

    int solve(string s)
    {
        stack<int> st;
        int mx=0;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){st.push(i);}
            else if(s[i]==')')
            {
                st.pop();
                if(st.empty()){st.push(i);}
                mx=max(mx,i-st.top());
            }
        }
        return mx;
    }
};


int main()
{
    string n;
    cin>>n;
    Solution s;
    cout<<s.longestValidParentheses(n);
}


