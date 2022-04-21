#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,cnt=0;
    cin>>a>>b;
    while(a>0 && b>0)
    {
        if(a<b)
        {
            swap(a,b);
        }
        cnt=cnt+a/b;
        a=a%b;
    }
    cout<<cnt;
    return 0;
}
