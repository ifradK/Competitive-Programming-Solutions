#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,val;
    cin>>n;
    set<long long> s;
    vector<long long> st;
    for(i=0;i<n;i++)
    {
        cin>>val;
        s.insert(val);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        st.push_back(*it);
    }
    if(st.size()==1)
    {
        cout<<0;
    }
    else if(st.size()==2)
    {
        if((st[1]-st[0])%2==0)
        {
            cout<<(st[1]-st[0])/2;
        }
        else
        {
            cout<<(st[1]-st[0]);
        }
    }
    else if(st.size()==3)
    {
        if((st[1]-st[0])==(st[2]-st[1]))
        {
            cout<<(st[1]-st[0]);
        }
        else
        {
            cout<<-1;
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
