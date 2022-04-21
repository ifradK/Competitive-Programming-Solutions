#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,n1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n1=n;
        long long temp=1;
        vector<pair<long long, long long>> mp;
        map<long long, long long> mp1;
        for(i=2; i*i<=n1; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    mp1[i]++;
                    n=n/i;
                }
            }
        }
        if(n>1)
        {
            mp1[n]++;
        }
        for(auto it=mp1.begin(); it!=mp1.end(); it++)
        {
            mp.push_back(make_pair(it->second,it->first));
        }
        sort(mp.begin(),mp.end(), greater<pair<long long, long long>>());
        if(mp.begin()->first==0)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else
        {
            cout<<mp.begin()->first<<endl;
            for(i=0; i<mp.begin()->first-1; i++)
            {
                cout<<mp.begin()->second<<" ";
            }
            auto it=mp.begin();
            temp=it->second;
            it++;
            for(it; it!=mp.end(); it++)
            {
                temp=temp*pow(it->second,it->first);
            }
            cout<<temp<<endl;
        }
        mp.clear();
        mp1.clear();
    }
    return 0;
}
