#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,zero=0,one=0,length;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    if(zero>one)
    {
      length=zero-one;
    }
    else if(zero<one)
    {
      length=one-zero;
    }
    else
    {
        length=0;
    }
    cout<<length;
    return 0;
}
