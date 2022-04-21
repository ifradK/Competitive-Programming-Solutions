#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long x,n,i,pos,small,large,big=0,little=0,start,end,middle,ans=1,mod=1000000007;
    cin>>n>>x>>pos;
    small=x-1;
    large=n-x;
    start=0;
    end=n;
    while(start<end)
    {
        long long middle=(start+end)/2;
        if(middle==pos)
        {
            start=middle+1;
        }
        else if(middle>pos)
        {
            big++;
            end=middle;
        }
        else if(middle<pos)
        {
            little++;
            start=middle+1;
        }
    }
    for(i=0;i<little;i++)
    {
        ans=ans*(small-i);
        ans=ans%mod;
    }
    for(i=0;i<big;i++)
    {
        ans=ans*(large-i);
        ans=ans%mod;
    }
    for(i=1;i<=n-little-big-1;i++)
    {
        ans=ans*i;
        ans=ans%mod;
    }
    cout<<ans;
    return 0;
}
