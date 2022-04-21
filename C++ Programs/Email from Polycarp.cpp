#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,j,k,p;
    string s,t;
    cin>>n;
    while(n--)
    {
        bool flag=false;
        vector<pair<char, long long>> p,q;
        cin>>s>>t;
        if(s[s.size()-1]==s[s.size()-2])
        {
            j=-2;
            for(i=0; i<s.size(); )
            {
                if(j>=s.size()-2)
                {
                    break;
                }
                long long cnt1=1;
                for(j=i; j<s.size()-1; j++)
                {
                    if(s[j]==s[j+1])
                    {
                        cnt1++;
                    }
                    else
                    {
                        i=j+1;
                        break;
                    }
                }
                p.push_back(make_pair(s[j],cnt1));
            }
        }
        else if(s[s.size()-1]!=s[s.size()-2])
        {
            for(i=0; i<s.size(); )
            {
                long long cnt1=1;
                if(i==s.size()-1)
                {
                    p.push_back(make_pair(s[i],cnt1));
                    break;
                }
                for(j=i; j<s.size()-1; )
                {
                    if(s[j]==s[j+1])
                    {
                        cnt1++;
                        j++;
                    }
                    else
                    {
                        i=j+1;
                        break;
                    }
                }
                p.push_back(make_pair(s[j],cnt1));
            }
        }


        if(t[t.size()-1]==t[t.size()-2])
        {
            j=-1;
            for(i=0; i<t.size(); )
            {
                if(j>=t.size()-2)
                {
                    break;
                }
                long long cnt1=1;
                for(j=i; j<t.size()-1; j++)
                {
                    if(t[j]==t[j+1])
                    {
                        cnt1++;
                    }
                    else
                    {
                        i=j+1;
                        break;
                    }
                }
                q.push_back(make_pair(t[j],cnt1));
            }
        }
        else if(t[t.size()-1]!=t[t.size()-2])
        {
            for(i=0; i<t.size(); )
            {
                long long cnt1=1;
                if(i==t.size()-1)
                {
                    q.push_back(make_pair(t[i],cnt1));
                    break;
                }
                for(j=i; j<t.size()-1; j++)
                {
                    if(t[j]==t[j+1])
                    {
                        cnt1++;
                    }
                    else
                    {
                        i=j+1;
                        break;
                    }
                }
                q.push_back(make_pair(t[j],cnt1));
            }
        }



        if(p.size()>q.size() || p.size()<q.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0;i<p.size();i++)
            {
                if(p[i].second>q[i].second || p[i].first!=q[i].first)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true)
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




//        for(i=0;i<p.size();i++)
//        {
//            cout<<p[i].first<<","<<p[i].second<<"  ";
//        }
//        cout<<endl;
//        for(i=0;i<q.size();i++)
//        {
//            cout<<"HERE"<<endl;
//            cout<<q[i].first<<","<<q[i].second<<"  ";
//        }
