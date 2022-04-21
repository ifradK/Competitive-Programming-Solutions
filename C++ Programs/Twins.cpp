#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,sum=0,sum1=0,total=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a, a+n, greater<int>());
    for(i=0;i<n;i++)
    {
        total=total+a[i];
        sum1=sum-total;
        if(total>sum1)
        {
            break;
        }
    }
    printf("%d",i+1);
    return 0;
}
