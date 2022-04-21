#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int decimal,reminder,i;
int binarytodecimal(long long);
main()
{
    long long n,dec,i=0,cnt=0;
    cin>>n;
    dec=binarytodecimal(n);
    while(1)
    {
        if(pow(4,i)>=dec)
        {
            break;
        }
        i++;
        cnt++;
    }
    cout<<cnt;
    return 0;
}

int binarytodecimal(long long n)
{
    while(n!=0)
    {
        reminder=n%10;
        n=n/10;
        decimal=decimal+reminder*pow(2,i);
        i++;
    }
    return decimal;
}
