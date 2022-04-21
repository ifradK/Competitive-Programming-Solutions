#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

#define mod 998244353

map<long long, long long> mp;
long long dp[1010][1010],temp=0,cnt=0;

long long solve(long long a[], long long n, long long k, long long i)
{
    if(k>n-i)
    {
        dp[k][i]=0;
        return dp[k][i];
    }
    if(k==0)
    {
        dp[k][i]=1;
        return dp[k][i];
    }
    if(dp[k-1][i+1]==-1 && dp[k][i+1]==-1)
    {
        dp[k][i]=((a[i]%mod*solve(a,n,k-1,i+1)%mod)%mod + solve(a,n,k,i+1)%mod)%mod;
    }
    else if(dp[k-1][i+1]==-1 && dp[k][i+1]!=-1)
    {
        dp[k][i]=((a[i]%mod*solve(a,n,k-1,i+1)%mod)%mod + dp[k][i+1]%mod)%mod;
    }
    else if(dp[k-1][i+1]!=-1 && dp[k][i+1]==-1)
    {
        dp[k][i]=((a[i]%mod*dp[k-1][i+1]%mod)%mod + solve(a,n,k,i+1)%mod)%mod;
    }
    else if(dp[k-1][i+1]!=-1 && dp[k][i+1]!=-1)
    {
        dp[k][i]=((a[i]%mod*dp[k-1][i+1]%mod)%mod + dp[k][i+1]%mod)%mod;
    }
    return dp[k][i];
}

int main()
{
    fastio;
    long long n,k,i,val,j=0;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++)
    {
        cin>>val;
        mp[val]++;
    }
    long long a[mp.size()];
    for(auto i : mp)
    {
        a[j]=i.second;
        j++;
    }
    cout<<solve(a,mp.size(),k,0);
    return 0;
}
