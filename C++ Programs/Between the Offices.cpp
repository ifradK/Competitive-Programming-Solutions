#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,f=0,s=0;
    cin>>n;
    string a;
    cin>>a;
    if(n==1)
    {
        cout<<"NO";
        return 0;
    }
    for(i=1; i<n; i++)
    {
        if(a[i-1]=='S' && a[i]=='F')
        {
            f++;
        }
        else if(a[i-1]=='F' && a[i]=='S')
        {
            s++;
        }
    }
    if(f>s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
