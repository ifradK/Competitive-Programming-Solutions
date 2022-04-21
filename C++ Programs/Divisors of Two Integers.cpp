#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,x,y,p=0;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    x=a[0];
    a[0]=0;
    for(i=1; i<n; i++)
    {
        if(x%a[i]==0)
        {
            if(a[i]==b[i-1])
            {
                a[i]=a[i];
            }
            else
            {
                a[i]=0;
            }
        }
    }
    sort(a,a+n,greater<int>());
    y=a[0];
    cout<<x<<" "<<y;
    return 0;
}
