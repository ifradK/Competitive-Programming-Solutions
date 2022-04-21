#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long n,mn,mx,sum=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    mn=a[0];
    mx=a[0];
    for(long long i=0;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
        }
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    cout<<sum-mx<<" "<<sum-mn;
    return 0;
}

