#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

long long mod(long long x,long long n,long long m)
{
    long long y;
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        y=mod(x,n/2,m);
        return (y*y)%m;
    }
    else
    {
        return ((x%m)*mod(x,n-1,m))%m;
    }
}

int main()
{
    fastio;
    long long a,b,c,ans;
    while(cin>>a>>b>>c)
    {
        ans=mod(a,b,c);
        cout<<ans<<endl;
    }
    return 0;
}
