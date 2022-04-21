#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,x,y;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<long long, long long>> p,p_down,p_up;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>ch;
            if(ch=='Y')
            {
                p.push_back(make_pair(x,y));
            }
        }
        sort(p.begin(),p.end());
        pair<long long, long long> start=p[0], End=p[p.size()-1];
        for(i=1;i<p.size()-1;i++)
        {
            long long temp=((p[i].first-start.first)*(start.second-End.second)/(start.first-End.first))+start.second;
            if(temp>p[i].second)
            {
                p_down.push_back(p[i]);
            }
            else
            {
                p_up.push_back(p[i]);
            }
        }
        sort(p_down.begin(),p_down.end());
        sort(p_up.begin(),p_up.end(),greater<pair<long long, long long>>());
        cout<<p.size()<<endl;
        cout<<start.first<<" "<<start.second<<endl;
        for(i=0;i<p_down.size();i++)
        {
            cout<<p_down[i].first<<" "<<p_down[i].second<<endl;
        }
        cout<<End.first<<" "<<End.second<<endl;
        for(i=0;i<p_up.size();i++)
        {
            cout<<p_up[i].first<<" "<<p_up[i].second<<endl;
        }
        p.clear();
        p_down.clear();
        p_up.clear();
    }
    return 0;
}

