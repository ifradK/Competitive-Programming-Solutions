#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

const long long sz = 2e6+5;
long long a[sz],b[sz];

int main()
{
    fastio;
    ll n,i,j;
    cin>>n;
    if(n<2)
    {
        cout<<0;
        return 0;
    }
    memset(b,1,sizeof(b));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=a[n-1]+1;
    for(i=0;i<n;i++)
    {
        if(a[i+1]-a[i]<2)
        {
            b[i]=0;
        }
    }
    ll cnt=1;
    for(i=n-1;i>=0;i--)
    {
        if(b[i]==0)
        {
            cnt=1;
        }
        else
        {
            cnt++;
            b[i]=cnt;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
