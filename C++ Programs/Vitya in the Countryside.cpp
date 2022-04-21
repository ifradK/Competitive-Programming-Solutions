#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1 && a[n-1]!=15 && a[n-1]!=0)
    {
        cout<<-1;
    }
    else
    {
        if(a[n-1]==15)
        {
            cout<<"DOWN";
        }
        else if(a[n-1]==0)
        {
            cout<<"UP";
        }
        else
        {
            if(a[n-2]>a[n-1])
            {
                cout<<"DOWN";
            }
            else
            {
                cout<<"UP";
            }
        }
    }
    return 0;
}
