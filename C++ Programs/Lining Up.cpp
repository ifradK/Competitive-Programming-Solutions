#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,i;
    cin>>n;
    ll a[n],val,ans=1,mod=1e9+7;
    memset(a,0,sizeof(a));
    bool flag=false;
    if(n%2==0)
    {
        for(i=0; i<n; i++)
        {
            cin>>val;
            a[val]++;
            if(val%2==0 || a[val]>2)
            {
                flag=true;
                break;
            }
            if(a[val]==1)
            {
                ans=(ans*2)%mod;
            }
        }
        if(flag==true)
        {
            cout<<0;
        }
        else
        {
            cout<<ans;
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cin>>val;
            a[val]++;
            if(val%2==1 || a[val]>2 || a[0]>1)
            {
                flag=true;
                break;
            }
            if(val!=0 && a[val]==1)
            {
                ans=(ans*2)%mod;
            }
        }
        if(flag==true)
        {
            cout<<0;
        }
        else
        {
            cout<<ans;
        }
    }
    return 0;
}
