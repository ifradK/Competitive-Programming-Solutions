#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

stack<char> st;

class Solution {
public:
    bool isValid(string s) {
        while(!st.empty()){st.pop();}
        return solve(s);
    }

    bool solve(string s)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){st.push(s[i]);}
            else
            {
                if(s[i]==')' && !st.empty() && st.top()=='('){st.pop();}
                else if(s[i]=='}' && !st.empty() && st.top()=='{'){st.pop();}
                else if(s[i]==']' && !st.empty() && st.top()=='['){st.pop();}
                else{return false;}
            }
        }
        if(st.empty()){return true;}
        else{return false;}
    }
};

int main()
{
    string str;
    cin>>str;
    Solution s;
    cout<<s.isValid(str)<<endl;
}

