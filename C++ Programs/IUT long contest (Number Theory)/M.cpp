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

long long power(long long a, long long b, long long c)
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

long long factors_sum(long long p)
{
    long long i,sum=0;
    set<long long> st;
    for(i=1;i*i<=p;i++)
    {
        if(p%i==0)
        {
            st.insert(i);
            st.insert(p/i);
        }
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        sum=sum+(*it);
    }
    return sum;
}

int main()
{
    fastio;
    long long t,n,m,p,mod=1000000007,sum,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        p=power(n,m,mod);
        cout<<p<<endl;
        sum=factors_sum(p);
        //cout<<sum<<endl;
        cout<<"Case "<<cs++<<": "<<sum%mod<<endl;
    }
    return 0;
}
//209946240
//696511476
