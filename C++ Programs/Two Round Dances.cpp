#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
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
    long long n,ans,i,temp1=1;
    cin>>n;
    ans=nCr(n,n/2);
    for(i=1;i<n/2;i++)
    {
        temp1=temp1*i;
    }
    ans=ans*temp1*temp1/2;
    cout<<ans;
    return 0;
}
