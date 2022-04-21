#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll m,n,i,j;
    string s,t;
    cin>>n>>m;
    cin>>s>>t;
    ll low[m],high[m],temp=0;
    for(i=0;i<m;i++)
    {
        for(j=temp;j<n;j++)
        {
            if(s[j]==t[i])
            {
                temp=j+1;
                low[i]=j;
                break;
            }
        }
    }
    temp=n-1;
    for(i=m-1;i>=0;i--)
    {
        for(j=temp;j>=0;j--)
        {
            if(s[j]==t[i])
            {
                temp=j-1;
                high[i]=j;
                break;
            }
        }
    }
    ll mx=INT_MIN;
    for(i=1;i<m;i++)
    {
        mx=max(mx,high[i]-low[i-1]);
    }
    cout<<mx;
    return 0;
}
