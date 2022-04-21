#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long x,y;
    float d;
    cin>>x>>y;
    if(x<=y)
    {
        cout<<"Not possible";
        return 0;
    }
    if(6*x<10*y)
    {
        d=(10*(float)y-(float)x*6)/4;
    }
    else
    {
        cout<<"Not possible";
        return 0;
    }
    if((int)d==d)
    {
        cout<<x-d<<" "<<y-d;
    }
    else
    {
        cout<<"Not possible";
    }
    return 0;
}
