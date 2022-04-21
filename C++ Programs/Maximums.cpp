#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,mx;
    cin>>n;
    long long a[n],b[n],x[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    a[0]=b[0];
    x[0]=0;
    x[1]=a[0];
    mx=a[0];
    for(i=1;i<n;i++)
    {
        a[i]=b[i]+x[i];
        mx=max(mx,a[i]);
        x[i+1]=mx;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
