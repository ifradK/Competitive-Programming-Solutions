#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,m,i,j,sum=0;
    cin>>n>>m;
    vector<pair<long long, long long>> t(n);
    vector<long long> p(n);
    for(i=0;i<n;i++)
    {
        cin>>t[i].first;
        sum=sum+t[i].first;
        t[i].second=sum;
        p[i]=t[i].first;
    }
    for(i=0;i<n;i++)
    {
        long long cnt=0,sum1=t[i].second;
        vector<long long> y(n);
        y=p;
        sort(y.begin(),y.begin()+i,greater<long long>());
        for(j=0;j<i;j++)
        {
            if(sum1<=m)
            {
                break;
            }
            sum1=sum1-y[j];
            cnt++;
        }
        cout<<cnt<<" ";
    }
    return 0;
}
