#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,Count=0;
    cin>>n>>m;
    while(n*m>0)
    {
        Count++;
        n=n-1;
        m=m-1;
    }
    if(Count%2==0)
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }
    return 0;
}
