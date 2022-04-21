#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long double h,l,x;
    cin>>h>>l;
    x=((l*l)-(h*h))/(2*h);
    cout<<fixed<<setprecision(13)<<x;
    return 0;
}
