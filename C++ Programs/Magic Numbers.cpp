#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i;
    string a;
    cin>>n;
    a=to_string(n);
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='1' && a[i+1]=='4' && a[i+2]=='4')
        {
            i=i+2;
        }
        else if(a[i]=='1' && a[i+1]=='4')
        {
            i=i+1;
        }
        else if(a[i]=='1')
        {
            i=i;
        }
        else
        {
            break;
        }
    }
    if(i==a.size())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
