#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string a;
    int n;
    cin>>a;
    cin>>n;
    if(a[0]=='f' && n==1)
    {
        cout<<"L";
    }
    else if(a[0]=='f' && n==2)
    {
        cout<<"R";
    }
    else if(a[0]=='b' && n==2)
    {
        cout<<"L";
    }
    else if(a[0]=='b' && n==1)
    {
        cout<<"R";
    }
    return 0;
}
