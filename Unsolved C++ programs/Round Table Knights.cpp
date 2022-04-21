#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,sum=0,i,j;
    vector<long long> v;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(a[i]==1)
        {
            v.push_back(i);
        }
    }
    if(sum==n)
    {
        cout<<"YES";
        return 0;
    }
    for(i=0;i<v.size();i++)
    {
        for(j=v[i];j<)
    }
}
