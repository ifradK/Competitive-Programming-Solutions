#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    string a,b,c,str1,str2,str3;
    cin>>str1>>str2>>str3;
    pair<int, char> p[3];
    p[0]=make_pair((int)str1[0], str1[1]);
    p[1]=make_pair((int)str2[0], str2[1]);
    p[2]=make_pair((int)str3[0], str3[1]);
    sort(p,p+3);

    if(p[0].second!=p[1].second && p[1].second!=p[2].second && p[2].second!=p[0].second)
    {
        cout<<2;
    }
    else if(p[0].second==p[1].second && p[1].second==p[2].second)
    {
        if(p[0].first==p[1].first && p[1].first==p[2].first)
        {
            cout<<0;
        }
        else if(p[0].first+1==p[1].first && p[1].first+1==p[2].first)
        {
            cout<<0;
        }
        else if(p[0].first+1==p[1].first || p[1].first+1==p[2].first || p[0].first+2==p[1].first || p[0].first+2==p[2].first || p[1].first+1==p[2].first || p[1].first+2==p[2].first)
        {
            cout<<1;
        }
        else if(p[0].first==p[1].first || p[0].first==p[2].first || p[1].first==p[2].first)
        {
            cout<<1;
        }
        else
        {
            cout<<2;
        }
    }
    else if(p[0].second==p[1].second)
    {
        if(p[0].first==p[1].first)
        {
            cout<<1;
        }
        else if(p[0].first+1==p[1].first || p[0].first+2==p[1].first)
        {
            cout<<1;
        }
        else
        {
            cout<<2;
        }
    }
    else if(p[0].second==p[2].second)
    {
        if(p[0].first==p[2].first)
        {
            cout<<1;
        }
        else if(p[0].first+1==p[2].first || p[0].first+2==p[2].first)
        {
            cout<<1;
        }
        else
        {
            cout<<2;
        }
    }
    else if(p[1].second==p[2].second)
    {
        if(p[1].first==p[2].first)
        {
            cout<<1;
        }
        else if(p[1].first+1==p[2].first || p[1].first+2==p[2].first)
        {
            cout<<1;
        }
        else
        {
            cout<<2;
        }
    }
    else
    {
        cout<<2;
    }
    return 0;
}
