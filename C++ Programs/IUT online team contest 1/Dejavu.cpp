#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i;
    cin>>n;
    long long x[100002],y[100002],a[n],b[n],sum=0;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        x[a[i]]++;
        y[b[i]]++;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(x[a[i]]-1)*(y[b[i]]-1);
    }
    cout<<sum;
    return 0;
}
