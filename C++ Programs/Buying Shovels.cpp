#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

bool isPrime(long long n)
{
    if(n==1)
    {
        return false;
    }
    if(n <= 3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(long long i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

long long sol(long long n, long long k)
{
    long long i,mx=INT_MIN;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0 && i<=k)
        {
            if(i<=k && n/i<=k)
            {
                mx=max(mx,max(i,n/i));
            }
            else if(i<=k)
            {
                mx=max(mx,i);
            }
            else if(n/i<=k)
            {
                mx=max(mx,n/i);
            }
        }
    }
    return mx;
}

int main()
{
    fastio;
    long long t,n,k,i,temp,temp2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==1)
        {
            if(k>=n)
            {
                cout<<1<<endl;
            }
            else if(isPrime(n)==true)
            {
                cout<<n<<endl;
            }
            else
            {
                temp=sol(n,k);
                cout<<n/temp<<endl;
            }
        }
        else
        {
            if(k>=n)
            {
                cout<<1<<endl;
            }
            else
            {
                temp=sol(n,k);
                cout<<n/temp<<endl;
            }
        }
    }
    return 0;
}
