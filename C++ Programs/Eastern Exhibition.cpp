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
        ll ans=1;
        vector<ll> x,y;
        for(i=0;i<n;i++)
        {
            cin>>a;
            x.push_back(a);
            cin>>a;
            y.push_back(a);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(x.size()%2==1)
        {
            ans=ans*1;
        }
        else
        {
            ans=ans*(x[x.size()/2]-x[x.size()/2-1]+1);
        }
        if(y.size()%2==1)
        {
            ans=ans*1;
        }
        else
        {
            ans=ans*(y[y.size()/2]-y[y.size()/2-1]+1);
        }
        cout<<ans<<endl;
        x.clear();
        y.clear();
    }
    return 0;
}
