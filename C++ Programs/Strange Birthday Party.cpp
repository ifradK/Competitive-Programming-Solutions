#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long k[n],c,cnt=1,sum=0;
        multimap<long long, long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>k[i];
        }
        sort(k,k+n);
        for(i=0;i<m;i++)
        {
            cin>>c;
            mp.insert({c,1});
        }
        i=0;
        for(auto it=mp.begin();it!=mp.end();)
        {
            if(cnt==k[i])
            {
                it->second++;
                i++;
            }
            else
            {
                it++;
                cnt++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(n < it->second)
            {
                sum=sum+(n*it->first);
                break;
            }
            else
            {
                sum=sum+(it->first*it->second);
                n=n-it->second;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
