#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        return solve(s);
    }

    string solve(string s)
    {
        stack<string> st;
        while(!st.empty()){st.pop();}
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                string temp0="";
                temp0=temp0+s[i];
                st.push(temp0);
            }
            else
            {
                string temp="";
                while(1)
                {
                    if(!st.empty() && st.top()=="["){st.pop(); break;}
                    else if(st.empty()){break;}
                    else{temp=temp+st.top(); st.pop();}
                }
                string temp1="";
                while(1)
                {
                    if(!st.empty() && st.top()>="0" && st.top()<="9"){temp1=temp1+st.top(); st.pop();}
                    else{break;}
                }
                reverse(temp1.begin(),temp1.end());
                int times=1;
                if(temp1.size()>0){times=stoi(temp1);}
                string str1="";
                for(int j=1;j<=times;j++){str1=str1+temp;}
                st.push(str1);
            }
        }
        string ans="";
        stack<string> st1;
        while(!st.empty()){st1.push(st.top()); st.pop();}
        while(!st1.empty())
        {
            string temp2=st1.top();
            reverse(temp2.begin(),temp2.end());
            ans=ans+temp2;
            st1.pop();
        }
        return ans;
    }
};


int main()
{
    string str;
    cin>>str;
    Solution s;
    cout<<s.decodeString(str);
}
