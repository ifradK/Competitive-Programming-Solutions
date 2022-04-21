#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,mx=LONG_MIN;
    cin>>n;
    set<long long> st;
    map<long long, long long> mp1,mp2;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(mp1.find(a[i]) == mp1.end())
        {
            mp1[a[i]]=i;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(mp2.find(a[i]) == mp2.end())
        {
            mp2[a[i]]=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(mp1.find(a[i]) != mp1.end() && mp2.find(a[i]) != mp2.end())
        {
            long long temp=mp2[a[i]]-mp1[a[i]]+1;
            if(temp>mx)
            {
                mx=temp;
            }
        }
    }
    cout<<mx;
    return 0;
}
