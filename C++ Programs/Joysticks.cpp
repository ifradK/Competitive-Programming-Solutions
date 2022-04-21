#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a1,a2,minutes=0;
    cin>>a1>>a2;
    if(a1==1 && a2==1)
    {
        cout<<0;
        return 0;
    }
    while(a1>0 && a2>0)
    {
        if(a1>=a2)
        {
            a2=a2+1;
            a1=a1-2;
        }
        else
        {
            a1=a1+1;
            a2=a2-2;
        }
        minutes++;
    }
    cout<<minutes;
    return 0;
}
