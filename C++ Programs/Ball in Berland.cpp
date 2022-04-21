#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,a,b,k,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        ll boys[a+1]={0},girls[b+1]={0},sum=0;
        pair<ll,ll> p[k+1];
        for(i=1;i<=k;i++)
        {
            cin>>p[i].first;
            boys[p[i].first]++;
        }
        for(i=1;i<=k;i++)
        {
            cin>>p[i].second;
            girls[p[i].second]++;
        }
        for(i=1;i<=k;i++)
        {
            sum=sum+(k-1)-(boys[p[i].first]-1)-(girls[p[i].second]-1);
        }
        cout<<sum/2<<endl;
    }
    return 0;
}
