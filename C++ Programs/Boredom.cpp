#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i;
    cin>>n;
    long long a[100010],dp[100010],val;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>val;
        a[val]=a[val]+val;
    }
    dp[0]=a[0];
    dp[1]=a[1];
    for(i=2;i<=100005;i++)
    {
        dp[i]=max(a[i]+dp[i-2],dp[i-1]);
    }
    cout<<dp[100005];
    return 0;
}
