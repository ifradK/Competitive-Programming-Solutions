#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,a,b,c,sum=0,dp[3]={0},temp[3]={0};
    cin>>n;
    cin>>dp[0]>>dp[1]>>dp[2];
    n--;
    while(n--)
    {
        cin>>a>>b>>c;
        temp[0]=max(a+dp[1],a+dp[2]);
        temp[1]=max(b+dp[0],b+dp[2]);
        temp[2]=max(c+dp[0],c+dp[1]);

        dp[0]=temp[0];
        dp[1]=temp[1];
        dp[2]=temp[2];
    }
    cout<<max(dp[0],max(dp[1],dp[2]));
    return 0;
}
