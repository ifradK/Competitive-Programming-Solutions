#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

long long nCr(long long n, long long r)
{
    long long p=1,k=1;
    if (n-r<r)
    {
        r=n-r;
    }
    if (r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m =__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }
    return p;
}

int main()
{
    fastio;
    ll t,n,k,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n<k)
        {
            cout<<"Case "<<cs++<<": "<<0<<endl;
            continue;
        }
        ll temp1=1,temp=nCr(n,k);
        for(ll i=k;i>0;i--)
        {
            temp1=temp1*i;
        }
        cout<<"Case "<<cs++<<": "<<temp*temp*temp1<<endl;
    }
    return 0;
}
