#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
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

int main()
{
    fastio;
    long long t,l,r,i;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l%2==1)
        {
            if(l<2)
            {
                cout<<2<<endl;
            }
            for(i=l; i<=r; i=i+2)
            {
                if(isPrime(i))
                {
                    cout<<i<<endl;
                }
            }
        }
        else
        {
            if(isPrime(l))
            {
                cout<<l<<endl;
            }
            for(i=l+1;i<=r;i=i+2)
            {
                if(isPrime(i))
                {
                    cout<<i<<endl;
                }
            }
        }
        if(t!=0)
        {
            cout<<endl;
        }
    }
    return 0;
}
