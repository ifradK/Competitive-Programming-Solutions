#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,i;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-2;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
