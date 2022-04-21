#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,i,j,cnt=0,pos=1;
    cin>>n>>m;
    int a[m];
    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        if(pos<a[i])
        {
            cnt=cnt+a[i]-pos;
            pos=a[i];
        }
        if(pos>a[i])
        {
            cnt=cnt+n-pos+a[i];
            pos=a[i];
        }
    }
    cout<<cnt;
    return 0;
}


