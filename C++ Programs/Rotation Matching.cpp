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
    long long a[n+1],b[n+1],idx[n+1],temp[n+1],ans[n+1]={0},mx=INT_MIN;
    memset(ans,0,sizeof(ans));
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        idx[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        temp[i]=idx[b[i]]-i;
        if(temp[i]<0)
        {
            temp[i]=n+temp[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        ans[temp[i]]++;
    }
    for(i=0;i<=n;i++)
    {
        if(ans[i]>mx)
        {
            mx=ans[i];
        }
    }
    cout<<mx;
    return 0;
}
