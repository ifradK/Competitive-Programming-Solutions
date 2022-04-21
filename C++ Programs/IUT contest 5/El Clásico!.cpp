#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
    long long t,i,m,n;
    long double p,ans=0;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        cin>>p;
        m=(2*n)-1;
        for(i=n; i<=m; i++)
        {
            ans=ans+(nCr(m,i)*pow(p,i)*pow(1-p,m-i));
        }
        cout<<fixed<<setprecision(2)<<abs(ans)<<endl;
    }
    return 0;
}
