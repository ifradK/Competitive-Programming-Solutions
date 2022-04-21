#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int len,i=0,acnt=0;
    string a;
    cin>>a;
    len=a.size();
    for(i=0;i<len;i++)
    {
        if(a[i]=='a')
        {
            acnt++;
        }
    }
    while(1)
    {
        if(len/2<acnt)
        {
            cout<<len;
            break;
        }
        else
        {
            len--;
        }
    }
    return 0;
}
