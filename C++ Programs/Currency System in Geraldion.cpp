#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
