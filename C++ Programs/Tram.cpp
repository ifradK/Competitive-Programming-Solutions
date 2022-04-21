#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,mx=0,i,remain=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        remain=remain+b[i]-a[i];
        if(remain>mx)
        {
            mx=remain;
        }
    }
    cout<<mx;
    return 0;
}
