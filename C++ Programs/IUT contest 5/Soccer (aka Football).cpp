#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,cs=0,x,goal,i;
    char ch;
    cin>>t;
    while(t--)
    {
        cs++;
        stack<long long> st;
        long long mx_goal=-1;
        cin>>x;
        cout<<"Case "<<cs<<":"<<endl;
        for(i=0;i<x;i++)
        {
            cin>>ch;
            if(ch=='A')
            {
                cin>>goal;
                mx_goal=max(mx_goal,goal);
                st.push(mx_goal);
            }
            else if(ch=='R')
            {
                if(!st.empty())
                {
                    st.pop();
                    if(!st.empty())
                    {
                        mx_goal=st.top();
                    }
                    else
                    {
                        mx_goal=-1;
                    }
                }
            }
            else if(ch=='Q')
            {
                if(st.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    cout<<st.top()<<endl;
                }
            }
        }
    }
    return 0;
}
