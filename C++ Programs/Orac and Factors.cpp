#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

bool isPrime(long long n)
{
    if(n <= 3){return true;}
    if(n%2==0 || n%3==0){return false;}
    for(long long i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}

long long temp(long long n)
{
    for(long long i=3; i*i<=n; i=i+2)
    {
        if(n%i==0)
        {
            return i;
        }
    }
}

int main()
{
    fastio;
    long long t,n,k,p;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        cin>>n>>k;
        if(n%2==0)
        {
            ans=n+(2*k);
        }
        else if(isPrime(n)==true)
        {
            ans=n*2+(2*(k-1));
        }
        else
        {
            p=temp(n);
            ans=p+n+(2*(k-1));
        }
        cout<<ans<<endl;
    }
    return 0;
}
