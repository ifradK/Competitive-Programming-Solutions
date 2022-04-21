#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
#define pi acos(-1)
using namespace std;
main()
{
    long double v,s,a;
    long double z,s1,radius,area;
    cin>>v>>s;
    z=(180*pi)/(v*180);
    a=s/(2*tan(z));
    s1=s/2;
    radius=sqrt((s1*s1)+(a*a));
    area=pi*radius*radius;
    cout<<fixed<<setprecision(9)<<area;
    return 0;
}
