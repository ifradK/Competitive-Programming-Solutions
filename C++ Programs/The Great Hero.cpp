#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll a,b,n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        pair<ll,ll> p[n];
        for(i=0;i<n;i++)
        {
            cin>>p[i].first;
        }
        for(i=0;i<n;i++)
        {
            cin>>p[i].second;
        }
        sort(p,p+n);
        bool flag=false;
        for(i=0;i<n;i++)
        {
            ll temp1=ceil((float)p[i].second/(float)a);
            ll temp2=ceil((float)b/(float)p[i].first);
            if(temp2<temp1 || b<=0)
            {
                flag=true;
                break;
            }
            else
            {
                p[i].second=0;
                b=b-(temp1*p[i].first);
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
