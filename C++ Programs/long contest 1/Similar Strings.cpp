#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    map<vector<long long>, long long> m;
    long long t,i,ans=0;
    cin>>t;
    while(t--)
    {
        int a[28]={0};
        vector<long long> v;
        string s;
        cin>>s;
        long long cnt=0;
        for(i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==0)
            {
                cnt++;
                a[s[i]-'a']=cnt;
                v.push_back(cnt);
            }
            else
            {
                v.push_back(a[s[i]-'a']);
            }
        }
        m[v]++;
    }
    map<vector<long long>, long long>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        long long n;
        n=it->second;
        ans=ans+((n*(n-1))/2);
    }
    cout<<ans;
    return 0;
}
