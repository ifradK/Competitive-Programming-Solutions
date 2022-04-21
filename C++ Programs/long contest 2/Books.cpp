#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,t,i,j,mx=INT_MIN;
    cin>>n>>t;
    long a[n+1]={0};
    for(i=1,j=0;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]+a[i-1];
        if(a[i]-a[j]>t)
        {
            j++;
        }
        if(mx<i-j)
        {
            mx=i-j;
        }
    }
    cout<<mx;
    return 0;
}
