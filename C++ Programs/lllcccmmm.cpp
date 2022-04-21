#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

bool prime[1000000+10];
vector<ll> v;

void SieveOfEratosthenes(long long n)
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;prime[1]=false;
    for(long long p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(long long i=p*p; i<=n; i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    for(ll i=0;i<1000010;i++)
    {
        if(prime[i]==true)
        {
            v.push_back(i);
        }
    }
}

ll sol(ll l)
{
    for(ll i=0;i<v.size();i++)
    {
        if(l%v[i]==0)
        {
            ll temp=l/v[i];
            return ((temp%1000000007)*(l%1000000007))%1000000007;
        }
    }
    return l%1000000007;
}

int main()
{
    fastio;
    ll t,l,ans;
    SieveOfEratosthenes(1000010);
    cin>>t;
    while(t--)
    {
        cin>>l;
        ans=sol(l);
        cout<<ans<<endl;
    }
    return 0;
}
