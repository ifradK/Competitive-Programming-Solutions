#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<ll,ll> mp,mp1;
        for(i=0; i<s.size(); i++)
        {
            mp[s[i]-'a'+1]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            mp1[it->second]=it->first;
        }

        auto it=mp1.end();
        it--;
        ll high_freq=it->first;
        auto it1=mp1.begin();
        ll low_freq=it1->first;
        ll freq_diff=high_freq-low_freq;

        bool flag=false;
        for(i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1])
            {
                flag=true;
                break;
            }
        }

        if(mp.size()==1 || high_freq==1)
        {
            cout<<"YES"<<endl;
        }
        else if(high_freq-low_freq>1 || (mp.size()>1 && flag==true))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            vector<ll> v[27];
            ll a[27][s.size()];
            memset(a,0,sizeof(a));
            v[s[0]-'a'+1].push_back(0);
            a[s[0]-'a'+1][0]=1;
            for(i=1; i<s.size(); i++)
            {
                v[s[i]-'a'+1].push_back(i);
                a[s[i]-'a'+1][i]=a[s[i]-'a'+1][i-1]+1;
                for(ll j=1; j<27; j++)
                {
                    if(s[i]-'a'+1!=j)
                    {
                        a[j][i]=a[j][i-1];
                    }
                }
            }


            bool flag1=false;
            for(i=1; i<27; i++)
            {
                if(v[i].size()>1)
                {
                    for(ll j=0; j<v[i].size()-1; j++)
                    {
                        for(ll k=1; k<27; k++)
                        {
                            if(k!=i && mp.find(k)!=mp.end())
                            {
                                ll temp=a[k][v[i][j+1]]-a[k][v[i][j]];
                                if(temp==0)
                                {
                                    flag1=true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if(flag1==true)
                {
                    break;
                }
            }
            if(flag1==true)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
