#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

vector<ll> v[1010];
ll fib[3500];

void fibo()
{
    fib[0]=0;
    fib[1]=1;
    for(ll i=2;i<3200;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}

void precal()
{
    v[1].push_back(0);
    for(ll i=2;i<1010;i++)
    {
        v[i].push_back(0);
        v[i].push_back(1);
        v[i].push_back(1);
        for(ll j=3;j<3200;j++)
        {
            ll temp=fib[j]%i;
            if(temp==1 && v[i][j-1]==0)
            {
                break;
            }
            else
            {
                v[i].push_back(temp);
            }
        }
        //cout<<i<<endl;
    }
}

unsigned long long bigmod(unsigned long long x,unsigned long long n,unsigned long long m)
{
    unsigned long long y;
    if(n==0) return 1;
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
    ll t,a,b,n;
    fibo();
    precal();
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        unsigned long long temp1=bigmod(a,b,n);
        cout<<temp1<<endl;
        //cout<<v[1000].size()<<endl;
        //cout<<v[n][temp1]<<endl;
//        for(ll i=0;i<1005;i++)
//        {
//            cout<<i<< " "<<v[i].size()<<endl;
//        }
    }
    return 0;
}
/*
1
18446744073709551615 18446744073709551615 1000
*/
