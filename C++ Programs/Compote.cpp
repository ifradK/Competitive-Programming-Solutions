#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,a,b,c,a1=0,b1=0,c1=0;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++)
    {
        if(i*2<=b && i*4<=c)
        {
            a1=a1+1;
            b1=b1+2;
            c1=c1+4;
        }
        else
        {
            break;
        }
    }
    cout<<a1+b1+c1;
    return 0;
}
