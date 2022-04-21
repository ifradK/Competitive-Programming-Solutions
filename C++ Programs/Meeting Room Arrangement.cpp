#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,cnt,s,f;
    vector<pair<long long, long long>> p;
    cin>>n;
    while(n--)
    {
        cnt=1;
        while(1)
        {
            cin>>s>>f;
            if(s==0 && f==0)
            {
                break;
            }
            p.push_back(make_pair(f,s));
        }
        sort(p.begin(),p.end());
        long long flag=0;
        for(i=1;i<p.size();i++)
        {
            if(p[i].second>=p[flag].first)
            {
                flag=i;
                cnt++;
            }
        }
        cout<<cnt<<endl;
        p.clear();
    }
    return 0;
}

