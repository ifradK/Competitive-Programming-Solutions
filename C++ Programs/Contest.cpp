#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d,misha,vasya;
    cin>>a>>b>>c>>d;
    misha=max(((3*a)/10),(a-((a/250)*c)));
    vasya=max(((3*b)/10),(b-((b/250)*d)));
    if(misha>vasya)
    {
        printf("Misha");
    }
    else if(vasya>misha)
    {
        printf("Vasya");
    }
    else
    {
        printf("Tie");
    }
    return 0;
}
