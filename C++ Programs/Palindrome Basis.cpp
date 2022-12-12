#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

vector<ll> palindrome;
ll dp[600][45000];
ll mod=1e9+7;

bool isPalindrome(ll num)
{
    string s=to_string(num);
    for(ll i=0,j=s.size()-1;i<s.size()/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}

void init()
{
    for(ll i=1;i<45000;i++)
    {
        if(isPalindrome(i))
        {
            palindrome.push_back(i);
        }
    }
}

void init2()
{
    ll i,j;
    for(i=0;i<palindrome.size();i++)
    {
        dp[i][0]=1;
    }
    for(i=0;i<44000;i++)
    {
        dp[0][i]=1;
    }
    for(i=1;i<palindrome.size();i++)
    {
        for(j=1;j<43000;j++)
        {
            if(palindrome[i]<=j)
            {
                dp[i][j]=(dp[i-1][j]%mod+dp[i][j-palindrome[i]]%mod)%mod;
            }
            else
            {
                dp[i][j]=dp[i-1][j]%mod;
            }
        }
    }
}

int main()
{
    fastio;
    ll t,n,i,j;
    cin>>t;
    init();
    init2();
    while(t--)
    {
        cin>>n;
        cout<<dp[palindrome.size()-1][n]<<endl;
    }
    return 0;
}
