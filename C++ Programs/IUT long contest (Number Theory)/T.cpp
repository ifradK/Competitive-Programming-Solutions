#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long mulmod(long long a, long long b, long long c)
{
    long long x=0, y=a%c;
    while(b>0)
    {
        if(b%2==1)
        {
            x=(x+y)%c;
        }
        y=(y*2)%c;
        b=b/2;
    }
    return x%c;
}

long long power(long long a, unsigned long long b, long long c)
{
    long long x = 1,y = a % c;
    while (b > 0)
    {
        if (b%2==1)
        {
            x = mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b = b/2;
    }
    return x%c;
}

bool millerTest(long long d, long long n)
{
    long long a=2+rand()%(n - 4);
    long long x=power(a,d,n);
    while(x!=1 && x!=n-1 && d!=n-1)
    {
        x=mulmod(x,x,n);
        d=d*2;
    }
    if(d%2==0 && x!=n-1)
    {
        return false;
    }
    return true;
}

bool isPrime(long long n, long long k)
{
    if(n<2){return false;}
    if(n%2==0 && n!=2){return false;}
    long long d=n-1;
    while(d%2==0)
    {
        d=d/2;
    }
    for(long long i=0; i<k; i++)
    {
        if(!millerTest(d,n))
        {
            return false;
        }
    }

    return true;
}


int main()
{
    fastio;
    long long k=50,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isPrime(n,k)==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

