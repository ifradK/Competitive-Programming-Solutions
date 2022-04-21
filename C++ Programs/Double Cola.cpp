#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i=1,a=1,b=5,c=1;
    float ans,q;
    cin>>n;
    while(1)
    {
        if(n>=a && n<=b)
        {
            break;
        }
        i=i*2;
        a=a+(c*5);
        b=b+(2*c*5);
        c=c*2;
    }
    q=n-(a-1);
    ans=ceil(q/i);
    if((int)ans==1)
    {
        printf("Sheldon");
    }
    else if((int)ans==2)
    {
        printf("Leonard");
    }
    else if((int)ans==3)
    {
        printf("Penny");
    }
    else if((int)ans==4)
    {
        printf("Rajesh");
    }
    else if((int)ans==5)
    {
        printf("Howard");
    }

    return 0;
}
