#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1],dp[n],mx=INT_MIN;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=n;i>0;i--)
        {
            if(a[i]+i>n)
            {
                dp[i]=a[i];
            }
            else
            {
                dp[i]=a[i]+dp[i+a[i]];
            }
        }
        for(i=1;i<=n;i++)
        {
            mx=max(mx,dp[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
