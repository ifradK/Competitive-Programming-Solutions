#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pair<ll,ll> p[n];
        ll sum[n]={0};
        bool flag[n]={false};
        for(i=0;i<n;i++)
        {
            cin>>p[i].first;
            p[i].second=i;
        }
        sort(p,p+n);
        sum[0]=p[0].first;
        for(i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+p[i].first;
        }
        flag[n-1]=true;
        for(i=n-2;i>=0;i--)
        {
            if(sum[i]>=p[i+1].first && flag[i+1]==true)
            {
                flag[i]=true;
            }
        }
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            if(flag[i]==true)
            {
                v.push_back(p[i].second);
            }
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
