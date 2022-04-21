#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,i;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            a.erase(i,1);
            break;
        }
    }
    cout<<a;
    return 0;
}
