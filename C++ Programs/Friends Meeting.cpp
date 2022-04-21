#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,a,b,diff,energya=0,energyb=0,ia=1,ib=1;
    cin>>a>>b;
    diff=abs(a-b);
    for(i=1;i<=diff;i++)
    {
        if(i%2!=0)
        {
            energya=energya+ia;
            ia++;
        }
        else
        {
            energyb=energyb+ib;
            ib++;
        }
    }
    cout<<energya+energyb;
    return 0;
}
