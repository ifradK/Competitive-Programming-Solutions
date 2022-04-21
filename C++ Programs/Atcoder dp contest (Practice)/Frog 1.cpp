#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fastio;
    long long n,i,j;
    cin>>n;
    long long a[n],dp[n];
    memset(dp,63,sizeof(dp));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dp[0]=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=i+2;j++)
        {
            dp[j]=min(dp[j],dp[i]+abs(a[j]-a[i]));
        }
    }
    cout<<dp[n-1];
    return 0;
}


