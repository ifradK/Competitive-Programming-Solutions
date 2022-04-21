#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,p,cnt=-1;
    cin>>n>>m;
    if(m%n==0)
    {
        cnt=0;
        p=m/n;
        while(p%2==0)
        {
            p=p/2;
            cnt++;
        }
        while(p%3==0)
        {
            p=p/3;
            cnt++;
        }
        if(p!=1)
        {
            cnt=-1;
        }
    }
    printf("%lld",cnt);
    return 0;
}
