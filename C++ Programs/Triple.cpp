#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll> mp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        bool flag=true;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>=3)
            {
                cout<<it->first<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<-1<<endl;
        }
        mp.clear();
    }
}
