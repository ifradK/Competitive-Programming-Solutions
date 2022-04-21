#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int n,j,k;
    cin>>n;
    pair<int,string> p[n];
    int rating,i;
    string name,handle;
    for(i=0;i<n;i++)
    {
        cin>>handle;
        p[i].second=handle;
    }
    for(i=0;i<n;i++)
    {
        cin>>rating;
        p[i].first=rating;
    }
    sort(p,p+n);
    for(i=n-1,j=1;i>=0;i--,j++)
    {
        cout<<j<<". "<<p[i].second;
        for(k=0;k<20-p[i].second.size();k++)
        {
            cout<<"-";
        }
        cout<<p[i].first<<endl;
    }
    return 0;
}
