#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,first=0,second=0;
    cin>>n;
    string a[n],b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[0]==a[i])
        {
            first++;
        }
        else
        {
            b=a[i];
            second++;
        }
    }
    if(first>second)
    {
        cout<<a[0];
    }
    else
    {
        cout<<b;
    }
    return 0;
}
