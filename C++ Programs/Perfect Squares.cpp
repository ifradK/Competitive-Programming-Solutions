#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long double root;
    int n,i;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i];
            return 0;
        }
        root=sqrt(a[i]);
        if(root-floor(root)!=0)
        {
            cout<<a[i];
            break;
        }
    }
    return 0;
}
