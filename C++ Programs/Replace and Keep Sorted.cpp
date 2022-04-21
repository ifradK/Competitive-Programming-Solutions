#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,q,k,i,l,r;
    cin>>n>>q>>k;
    ll a[n+2],sum[n+1]={0},val[n+1]={0},ans=0;
    k++;
    a[0]=0;
    a[n+1]=k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        val[i]=(a[i]-a[i-1]-1)+(a[i+1]-a[i]-1);
    }
    for(i=1;i<=n;i++)
    {
        sum[i]=val[i]+sum[i-1];
    }
    while(q--)
    {
        cin>>l>>r;
        if(l==r)
        {
            ans=k-2;
        }
        else
        {
            ans=sum[r-1]-sum[l];
            ans=ans+(a[l]-1)+(a[l+1]-a[l]-1)+(a[r]-a[r-1]-1)+(k-a[r]-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}

