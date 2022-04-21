#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,extra,minH,maxH,a;
    cin>>n;
    extra=n%7;
    a=((n/7)*2);
    if(extra==6)
    {
        minH=a+1;
    }
    else
    {
        minH=a;
    }
    if(extra==1)
    {
        maxH=a+1;
    }
    else if(extra>=2)
    {
        maxH=a+2;
    }
    else
    {
        maxH=a;
    }
    cout<<minH<<" "<<maxH;
    return 0;
}
