#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,cnt=0;
    string str;
    stack<char> st;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            st.push(str[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                cnt++;
            }
        }
    }
    cout<<str.size()-cnt-st.size();
    return 0;
}
