#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,i,t,k,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll> a;
        vector<pair<ll,ll>> b;
        map<ll,ll> mp;
        for(i=0; i<n; i++)
        {
            cin>>q;
            mp[q]++;
            a.push_back(q);
        }
        sort(a.begin(),a.end());
        a.push_back(-1);
        ll temp=a[0],l=a[0],r=a[0],cnt=0,mx=-1,right=a[0],left=a[0],mx_cnt=-1;
        for(i=0; i<n+1; i++)
        {
            if(a[i]!=temp)
            {
                if(cnt>=k && a[i-1]+1!=a[i])
                {
                    r=a[i-1];
                    if(mx<=r-l)
                    {
                        mx=r-l;
                        right=r;
                        left=l;
                        b.push_back({left,right});
                    }
                    l=a[i];
                    r=a[i];
                }
                else if(cnt>=k && a[i-1]+1==a[i]){r=a[i-1];}
                else if(cnt<k)
                {
                    if(mx<=r-l)
                    {
                        mx=r-l;
                        right=r;
                        left=l;
                        b.push_back({left,right});
                    }
                    r=a[i];
                    l=a[i];
                }
                cnt=0;
            }
            cnt++;
            temp=a[i];
            mx_cnt=max(mx_cnt,cnt);
        }
        if(mx_cnt>=k)
        {
            for(i=b.size()-1;i>=0;i--)
            {
                if(mp[b[i].first]>=k && mp[b[i].second]>=k)
                {
                    cout<<b[i].first<<" "<<b[i].second<<endl;break;
                }
            }
        }
        else{cout<<-1<<endl;}
    }
    return 0;
}
