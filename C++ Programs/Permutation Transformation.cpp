#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

ll height[150]={0},a[150];

void solve(ll l, ll r, ll h)
{
    if(l>r)
    {
        return;
    }
    if(l==r)
    {
        height[a[l]]=h+1;
        return;
    }
    ll idx,mx=INT_MIN;
    for(ll j=l; j<=r; j++)
    {
        if(a[j]>mx)
        {
            mx=a[j];
            idx=j;
        }
    }
    height[a[idx]]=h+1;
    solve(l,idx-1,h+1);
    solve(idx+1,r,h+1);
}

int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll mx=INT_MIN,idx;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>mx)
            {
                mx=a[i];
                idx=i;
            }
        }
        height[a[idx]]=0;
        solve(0,idx-1,0);
        solve(idx+1,n-1,0);
        for(i=0;i<n;i++)
        {
            cout<<height[a[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
