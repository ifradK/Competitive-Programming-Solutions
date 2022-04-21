#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long d,n,cnt=0,day=0,i,j;
    cin>>d>>n;
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cnt=cnt+d-a[i];
    }
    cout<<cnt;
    return 0;
}
