#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
main()
{
    long long i,j=0,n,sum=0,odd;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            odd=a[i];
            break;
        }
    }
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        sum=sum-odd;
        cout<<sum;
    }
    return 0;
}



