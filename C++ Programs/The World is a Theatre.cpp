#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
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
    long long n,m,t,i,sum=0;
    cin>>n>>m>>t;
    for(i=4; ;i++)
    {
        if(t-i<1)
        {
            break;
        }
        if(i>n || t-i>m)
        {
            continue;
        }
        sum=sum+(nCr(n,i)*nCr(m,t-i));
    }
    cout<<sum;
    return 0;
}
