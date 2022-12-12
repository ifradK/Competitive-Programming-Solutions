#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[200005];

int solve(string &s, int i)
{
    if(i>s.size()-1)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    if(i==s.size()-1)
    {
        return 1;
    }
    if(i<s.size()-1 && s[i]==s[i+1])
    {
        return solve(s,i+2);
    }
    else
    {
        bool flag=false;
        int j;
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            return 1+solve(s,i+1);
        }
        else
        {
            int option1=1+solve(s,i+1);
            int option2=j-i-1+solve(s,j+1);

            return dp[i]=min(option1,option2);
        }
    }
}

int main()
{
    fastio;
    int t,i;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            dp[i]=-1;
        }
        cout<<solve(str,0)<<endl;
    }
    return 0;
}
