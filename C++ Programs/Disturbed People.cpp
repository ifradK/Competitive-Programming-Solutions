#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,cnt=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n-1; i++)
    {
        if(a[i-1]==1 && a[i]==0 && a[i+1]==1)
        {
            a[i+1]=0;
            cnt++;
            i=0;
        }
    }
    cout<<cnt;
    return 0;
}
