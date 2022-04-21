#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i,n;
    string a;
    cin>>t;
    while(t--)
    {
        stack<char> st1,st2;
        cin>>n;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='(')
            {
                st1.push(a[i]);
            }
            else
            {
                st2.push(a[i]);
                if(!st1.empty())
                {
                    st1.pop();
                    st2.pop();
                }
            }
        }
        cout<<st1.size()<<endl;
        while(!st1.empty())
        {
            st1.pop();
        }
        while(!st2.empty())
        {
            st2.pop();
        }
    }
    return 0;
}
