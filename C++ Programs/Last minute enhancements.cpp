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
        long long a[n],ans=0;
        map<long long, long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(i=n-1;i>=0;i--)
        {
            if(mp.find(a[i]+1)==mp.end() || mp[a[i]+1]==0)
            {
                mp[a[i]+1]++;
                mp[a[i]]--;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
