#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long dp[10000000]={0};

int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1],ans=0;
        memset(dp,0,sizeof(dp));
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=n;i>=1;i--)
        {
            dp[i]=1;
            for(j=2;j*i<=n;j++)
            {
                if(a[i]<a[j*i])
                {
                    dp[i]=max(1+dp[i*j],dp[i]);
                }
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

