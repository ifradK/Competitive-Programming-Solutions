#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j,sum=0;
    string s,c,p;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        pair<long long, char> p1[n];
        cin>>s>>c>>p;
        for(i=0; i<n; i++)
        {
            p1[i].first=(long long)c[i]-48;
            p1[i].second=s[i];
        }
        sort(p1,p1+n);
        bool flag=false;
        for(i=0; i<m; i++)
        {
            flag=false;
            for(j=0; j<n; j++)
            {
                if(p1[j].second==p[i])
                {
                    sum=sum+p1[j].first;
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
