#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,diff,i;
    cin>>n>>m;
    if(n>m)
    {
        diff=n-m;
        for(i=0;i<diff;i++)
        {
            cout<<"B";
        }
        for(i=0;i<n+m-diff;i++)
        {
            if(i%2==0)
            {
                cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }
    }
    else if(n==m)
    {
        for(i=1;i<=n+m;i++)
        {
            if(i%2==0)
            {
                cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }
    }
    else if(m>n)
    {
        diff=m-n;
        for(i=0;i<diff;i++)
        {
            cout<<"G";
        }
        for(i=0;i<n+m-diff;i++)
        {
            if(i%2==0)
            {
                cout<<"B";
            }
            else
            {
                cout<<"G";
            }
        }
    }
    return 0;
}
