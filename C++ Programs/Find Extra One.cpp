#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,pos=0,neg=0,diff;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    diff=abs(pos-neg);
    if(pos==0 || neg==0)
    {
        cout<<"Yes";
    }
    else if(diff>0)
    {
        if(pos==1 || neg==1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if(diff==0)
    {
        if(pos==1 && neg==1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }

    return 0;
}
