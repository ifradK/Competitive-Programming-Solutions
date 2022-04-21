#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,i,mn,total=0;
    cin>>n;
    int a[n],p[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
    }
    mn=p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]<mn)
        {
            mn=p[i];
            total=total+mn*a[i];
        }
        else
        {
            total=total+mn*a[i];
        }
    }
    cout<<total;
    return 0;
}
