#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,x,y,z,yellow=0,blue=0,reqy=0,reqb=0,sum=0;
    cin>>a>>b;
    cin>>x>>y>>z;
    yellow=yellow+(2*x);
    yellow=yellow+y;
    blue=blue+y;
    blue=blue+(3*z);
    reqy=yellow-a;
    reqb=blue-b;
    if(reqy>=0)
    {
        sum=sum+reqy;
    }
    if(reqb>=0)
    {
        sum=sum+reqb;
    }
    cout<<sum;
    return 0;
}
