#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long l,n=0,z=0,i;
    string a;
    cin>>l;
    cin>>a;
    for(i=0; i<l; i++)
    {
        if(a[i]=='z')
        {
            z++;
        }
        else if(a[i]=='n')
        {
            n++;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<1<<" ";
    }
    for(i=0; i<z; i++)
    {
        if(i==z-1)
        {
            cout<<0;
        }
        else
        {
            cout<<0<<" ";
        }
    }
    return 0;
}
