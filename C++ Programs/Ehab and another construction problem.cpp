#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long i,j,x;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i*j>x && i/j<x && i%j==0)
            {
               printf("%ld %ld",i,j);
               return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
