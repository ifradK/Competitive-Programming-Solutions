#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,mn=2000,diff,k,l;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=a[0];
    for(i=0;i<n;i++)
    {
        diff=abs(a[i]-a[i+1]);
        if(diff<mn)
        {
            mn=diff;
            k=i+1;
            l=i+2;
        }
    }
    if(k==n+1)
    {
        k=1;
    }
    if(l==n+1)
    {
        l=1;
    }
    cout<<k<<" "<<l;
    return 0;
}
