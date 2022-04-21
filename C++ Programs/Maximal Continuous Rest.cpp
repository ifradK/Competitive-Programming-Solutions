#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,sum=0,mx=0,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum=sum+a[i];
            if(sum>mx)
            {
                mx=sum;
            }
        }
        else
        {
            sum=0;
        }

        if(i==n-1)
        {
            i=-1;
            if(p==1)
            {
                break;
            }
            p=1;
        }
    }
    cout<<mx;
    return 0;
}
