#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define pi acos(-1)
main()
{
    long long t,a;
    long double square_side,radius,area,perimeter;
    cin>>t;
    while(t--)
    {
        cin>>a;
        square_side=sqrt(a);
        radius=square_side/2;
        area=a-(pi*radius*radius);
        perimeter=2*pi*radius;
        cout<<fixed<<setprecision(16)<<area<<" "<<perimeter<<endl;
    }
    return 0;
}
