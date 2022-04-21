#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,v,i,sum=0,cnt=0;
    cin>>n>>v;
    long long fruits[3005]={0};
    pair<long long, long long> p[n];
    memset(fruits,0,sizeof(fruits));
    for(i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
        cnt=cnt+p[i].second;
        fruits[p[i].first]=v;
        fruits[p[i].first+1]=v;
    }
    sort(p,p+n);
    for(i=0;i<n;i++)
    {
        if(p[i].second>fruits[p[i].first])
        {
            p[i].second=p[i].second-fruits[p[i].first];
            fruits[p[i].first]=0;
            if(p[i].second>fruits[p[i].first+1])
            {
                p[i].second=p[i].second-fruits[p[i].first+1];
                fruits[p[i].first+1]=0;
            }
            else
            {
                fruits[p[i].first+1]=fruits[p[i].first+1]-p[i].second;
                p[i].second=0;
            }
        }
        else
        {
            fruits[p[i].first]=fruits[p[i].first]-p[i].second;
            p[i].second=0;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+p[i].second;
    }
    cout<<cnt-sum;
    return 0;
}
