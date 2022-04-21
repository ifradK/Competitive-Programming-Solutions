#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3,a4,b4,c4,d4;
    cin>>n;
    cin>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2>>a3>>b3>>c3>>d3>>a4>>b4>>c4>>d4;

    if(min(a1,b1)+min(c1,d1)<=n)
    {
        cout<<1<<" "<<min(a1,b1)<<" "<<n-min(a1,b1);
    }
    else if(min(a2,b2)+min(c2,d2)<=n)
    {
        cout<<2<<" "<<min(a2,b2)<<" "<<n-min(a2,b2);
    }
    else if(min(a3,b3)+min(c3,d3)<=n)
    {
        cout<<3<<" "<<min(a3,b3)<<" "<<n-min(a3,b3);
    }
    else if(min(a4,b4)+min(c4,d4)<=n)
    {
        cout<<4<<" "<<min(a4,b4)<<" "<<n-min(a4,b4);
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
