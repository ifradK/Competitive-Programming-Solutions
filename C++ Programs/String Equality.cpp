#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,k,n,i,j;
    cin>>t;
    while(t--)
    {
        map<char,long long> mp,mp1;
        vector<pair<char,long long>> p,p1;
        string str1,str2;
        bool flag=false;
        cin>>n>>k>>str1>>str2;
        for(i=0; i<n; i++)
        {
            mp[str1[i]]++;
            mp1[str2[i]]++;
        }
//        for(auto it=mp.begin();it!=mp.end();it++)
//        {
//            cout<<it->first<< " "<<it->second<<endl;
//        }
//        cout<<"HERE"<<endl;
//        for(auto it=mp1.begin();it!=mp1.end();it++)
//        {
//            cout<<it->first<< " "<<it->second<<endl;
//        }
        for(i=0; i<n; i++)
        {
            if(mp1.find(str1[i])!= mp1.end())
            {
                if(mp1[str1[i]]>0)
                {
                    mp1[str1[i]]--;
                    mp[str1[i]]--;
                }
            }
        }
//cout<<"KLKLKLKL"<<endl;
//        for(auto it=mp.begin();it!=mp.end();it++)
//        {
//            cout<<it->first<< " "<<it->second<<endl;
//        }
//        cout<<"HERE"<<endl;
//        for(auto it=mp1.begin();it!=mp1.end();it++)
//        {
//            cout<<it->first<< " "<<it->second<<endl;
//        }

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second > 0)
            {
                p.push_back(make_pair(it->first,it->second));
            }
        }
        for(auto it=mp1.begin();it!=mp1.end();it++)
        {
            if(it->second > 0)
            {
                p1.push_back(make_pair(it->first,it->second));
            }
        }
        for(i=0,j=0;i<p.size(),j<p1.size(); )
        {
            if(p[i].first<=p1[j].first && p[i].second-k>=0 && p1[j].second-k>=0)
            {
                p[i].second=p[i].second-k;
                p1[j].second=p1[j].second-k;
            }
            else
            {
                flag=true;
                break;
            }
            if(p[i].second==0)
            {
                i++;
            }
            if(p1[j].second==0)
            {
                j++;
            }
        }
//        for(auto it=p.begin(),it1=p1.begin(); it!=p.end(),it1!=p1.end(); it++,it1++)
//        {
//            if(it->first<=it1->first && (it->second)%k==0 && (it1->second)%k==0)
//            {
//                //nothing mara kha
//            }
//            else
//            {
//                flag=true;
//                break;
//            }
//        }
        if(flag==true)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
