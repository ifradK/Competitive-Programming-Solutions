#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long m,l,r,i;
    string str;
    cin>>str;
    cin>>m;
    long long dp[str.size()+1]={0};
    dp[0]=0;
    for(i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
        {
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=dp[i-1];
        }
    }
    while(m--)
    {
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
    return 0;
}
