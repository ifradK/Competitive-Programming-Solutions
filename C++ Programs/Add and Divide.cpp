#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

ll Log(ll base, ll x)
{
    ll cnt=0;
    while(x!=0)
    {
        x=x/base;
        cnt++;
    }
    return cnt;
}

int main()
{
    fastio;
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll ans=0,mn=INT_MAX;
        if(b==1)
        {
            b++;
            ans++;
        }
        for(ll i=0;i<10;i++)
        {
            ll temp=ans+Log(b+i,a)+i;
            mn=min(mn,temp);
        }
        cout<<mn<<endl;
    }
    return 0;
}
