#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    if(a[0]+a[1]==a[2]+a[3] || a[0]+a[2]==a[1]+a[3] || a[0]+a[3]==a[1]+a[2] || a[0]==a[1]+a[2]+a[3] || a[1]==a[0]+a[2]+a[3] || a[2]==a[0]+a[1]+a[3] || a[3]==a[0]+a[1]+a[2])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
