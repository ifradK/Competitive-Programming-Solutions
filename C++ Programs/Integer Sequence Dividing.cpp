#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,sum;
    cin>>n;
    sum=(n*(n+1))/2;
    if(sum%2==0)
    {
        cout<<0;
    }
    else if(sum%2==1)
    {
        cout<<1;
    }
    return 0;
}
