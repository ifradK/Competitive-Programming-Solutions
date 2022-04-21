#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,s,i;
    cin>>s>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    pair<int,int> p[n];
    for (i=0; i<n; i++)
    {
        p[i].first=a[i];
        p[i].second=b[i];
    }
    sort(p,p+n);
    for (i=0; i<n; i++)
    {
        a[i]=p[i].first;
        b[i]=p[i].second;
    }
    for(i=0; i<n; i++)
    {
        if(s>a[i])
        {
            s=s+b[i];
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
