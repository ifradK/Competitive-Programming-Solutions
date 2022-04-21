#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,m,x,i,sum=0,left,totalleft;
    long double ans;
    cin>>n>>m>>x;
    long a[m+1];
    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum<n)
    {
        cout<<-1;
        return 0;
    }
    if(a[x]-1<1)
    {
        cout<<0.000000;
        return 0;
    }
    left=sum-1;
    totalleft=n-1;
    ans=(long double)totalleft/(long double)left;
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}
