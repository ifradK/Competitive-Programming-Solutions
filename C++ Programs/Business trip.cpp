#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,k,sum=0,p=0,a[12];
    cin>>k;
    for(i=0; i<12; i++)
    {
        cin>>a[i];
    }
    sort(a,a+12,greater<int>());
    for(i=0; i<12; i++)
    {
        if(sum>=k)
        {
            p=1;
            break;
        }
        sum=sum+a[i];
    }
    if(sum>=k)
    {
        p=1;
    }
    if(p==1)
    {
        cout<<i;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}



