#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

const long long sz = 2e6+20;
pair<ll,ll> p[sz];

int main()
{
    fastio;
    ll t,i,n,m,val;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        pair<ll,ll> p[n];
        for(i=0;i<n;i++)
        {
            cin>>val;
            ll temp=m-val;
            if(temp<0)
            {
                temp=0;
            }
            p[i].first=temp;
            p[i].second=i+1;
        }
        sort(p,p+n);
        for(i=0;i<n;i++)
        {
            cout<<p[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
