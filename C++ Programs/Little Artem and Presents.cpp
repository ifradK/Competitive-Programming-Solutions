#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i=0,cnt=0;
    cin>>n;
    while(cnt<=n)
    {
        i++;
        if(i%2==0)
        {
            cnt=cnt+2;
        }
        else
        {
            cnt=cnt+1;
        }
    }
    cout<<i-1;
    return 0;
}
