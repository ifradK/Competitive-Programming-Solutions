#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i=0;
    cin>>n>>m;
    while(n!=0)
    {
        n=n-1;
        i++;
        if(i%m==0)
        {
            n=n+1;
        }
    }
    printf("%d",i);
    return 0;
}
