#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,m,a,i,correct=0,wrong=0;
    string b;
    cin>>n>>m;
    long cnt[n];
    map<long long,bool> mp;
    for(i=0;i<n;i++)
    {
        cnt[i]=0;
        mp[i]=false;
    }
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        if(b=="AC" && mp[a]==false)
        {
            correct++;
            mp[a]=true;
            wrong=wrong+cnt[a-1];
        }
        else if(b=="WA" && mp[a]==false)
        {
            cnt[a-1]++;
        }
    }
    cout<<correct<<" "<<wrong;
    return 0;
}
