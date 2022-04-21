#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d=1;
    cin>>a>>b;
    int cnt=a;
    while(a>=b)
    {
        d=(a/b);
        cnt=cnt+d;
        c=a%b;
        a=d+c;
    }
    cout<<cnt;
    return 0;
}
