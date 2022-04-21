#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool prime[1000001];
long long ans[1000001];
vector<int> v_prime;

void SieveOfEratosthenes()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;prime[1]=false;
    for(long long p=2; p*p<=1000001; p++)
    {
        if(prime[p]==true)
        {
            for(long long i=p*p; i<=1000001; i=i+p)
            {
                prime[i]=false;
            }
            v_prime.push_back(p);
        }
    }
    for(long long i=v_prime.back()+1;i<=1000001;i++)
    {
        if(prime[i]==true)
        {
            v_prime.push_back(i);
        }
    }
}

void factorize()
{
    SieveOfEratosthenes();
    long long i,temp,j;
    ans[1]=0;
    for(i=2;i<1000001;i++)
    {
        ans[i]=ans[i-1];
        temp=i;
        j=0;
        while(!prime[temp])
        {
            if(temp%v_prime[j]==0)
            {
                ans[i]++;
                temp=temp/v_prime[j];
            }
            else
            {
                j++;
            }
        }
        if(prime[temp]==true)
        {
            ans[i]++;
        }
    }
}

int main()
{
    fastio;
    long long n,i,j,temp,cnt=0,v;
    factorize();
    while(cin>>n)
    {
        cout<<ans[n]<<endl;
    }
    return 0;
}
