#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define pi acos(-1)
main()
{
    long long n,i;
    cin>>n;
    long double x1,y1,x2,y2,len,half_len,area,a,b,q,distance,half_distance;
    for(i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>len;
        distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        q=(len-distance)/2;
        a=(q+q+distance)/2;
        half_len=len/2;
        half_distance=distance/2;
        b=sqrt((half_len*half_len)-(half_distance*half_distance));
        area=pi*a*b;
        cout<<fixed<<setprecision(10)<<area<<endl;
    }
    return 0;
}
