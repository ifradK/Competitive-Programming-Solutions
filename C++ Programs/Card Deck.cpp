#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll p[n];
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        pair<ll,ll> idx[n];
        for(i=0;i<n;i++)
        {
            idx[i].first=p[i];
            idx[i].second=i;
        }
        sort(idx,idx+n,greater<pair<ll,ll>>());
        ll End=n-1;
        for(i=0;i<n;i++)
        {
            if(idx[i].second<=End)
            {
                for(j=idx[i].second;j<=End;j++)
                {
                    cout<<p[j]<<" ";
                }
                End=idx[i].second-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
