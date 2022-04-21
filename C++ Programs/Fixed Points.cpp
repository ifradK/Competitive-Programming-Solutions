#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,i,j,p=0,cnt=0,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==a[i])
        {
            cnt++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i!=a[i])
        {
            k=a[i];
            if(a[k]==i)
            {
                p=2;
                break;
            }
        }
    }
    if(p==2)
    {
        cout<<cnt+p;
    }
    else if(cnt!=n)
    {
        cout<<cnt+1;
    }
    else
    {
        cout<<cnt;
    }
    return 0;
}
