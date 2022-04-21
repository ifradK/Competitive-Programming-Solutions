#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long phi[1000002], ans[1000002];

void ETF()
{
    for(long long i=1; i<=1000000; i++)
    {
        phi[i]=i;
    }
    for(long long i=2; i<=1000000; i++)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(long long j=2*i; j<=1000000; j=j+i)
            {
                phi[j]=(phi[j]*(i-1))/i;
            }
        }
    }
    for(long long i=1; i<=1000000; i++)
    {
        for(long long j=i; j<=1000000; j=j+i)
        {
            ans[j]=ans[j]+(i*phi[i]);
        }
    }
}

long long LcmSum(long long m)
{
    long long answer=ans[m];
    answer=(answer+1)*m;
    answer=answer/2;
    return answer;
}

int main()
{
    fastio;
    long long t,n,ans,i;
    ETF();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<LcmSum(n)<<endl;
    }
    return 0;
}
