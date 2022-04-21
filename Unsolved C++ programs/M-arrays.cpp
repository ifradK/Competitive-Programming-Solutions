#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n],cnt=0;
        map<ll,ll> mp1;
        vector<pair<ll,ll>> p;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mp1[a[i]]++;
        }
        for(auto it=mp1.begin(); it!=mp1.end(); it++)
        {
            p.push_back(make_pair(it->second,it->first));
        }
        sort(p.begin(),p.end(),greater<pair<ll,ll>>());
        for(i=0; i<p.size(); i++)
        {
            ll val=p[i].second;
            cout<<"VAL "<<val<<endl;
            while(1)
            {
                ll temp1=val-(m*ceil((double)val/(double)m));
                auto it1=mp1.find(temp1);
                if(it1!=mp1.end() && it1->second>0)
                {
                    val=it1->first;
                    it1->second--;
                }
                else
                {
                    break;
                }
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
/*
1
6 4
2 2 8 6 9 4
*/
