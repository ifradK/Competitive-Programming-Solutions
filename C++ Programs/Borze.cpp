#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='-' && a[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            cout<<2;
            i++;
        }
        else if(a[i]=='.')
        {
            cout<<0;
        }
    }
    return 0;
}
