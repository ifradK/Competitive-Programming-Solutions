#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    long a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum*n;
    return 0;
}
