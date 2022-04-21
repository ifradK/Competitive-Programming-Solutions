#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long bigmod(long long x,long long n,long long m)
{
    long long y;
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        y=bigmod(x,n/2,m);
        return (y*y)%m;
    }
    else
    {
        return ((x%m)*bigmod(x,n-1,m))%m;
    }
}

int main()
{
    fastio;
    long long n,m,i,ans,power1,a;
    cin>>n>>m;
    a=3%m;
    power1=bigmod(a,n,m)-1;
    if(power1>=0)
    {
        cout<<power1;
    }
    else
    {
        cout<<power1+m;
    }
    return 0;
}
