#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long Maximum_Sub_Array1(long long a[], long long s)
{
    long long mx=INT_MIN, max_current=0;
    for(long long i=0; i<s-1; i++)
    {
        max_current=max_current+a[i];
        if(mx<max_current)
        {
            mx=max_current;
        }
        if(max_current<0)
        {
            max_current=0;
        }
    }
    return mx;
}

long long Maximum_Sub_Array2(long long a[], long long s)
{
    long long mx=INT_MIN, max_current=0;
    for(long long i=1; i<s; i++)
    {
        max_current=max_current+a[i];
        if(mx<max_current)
        {
            mx=max_current;
        }
        if(max_current<0)
        {
            max_current=0;
        }
    }
    return mx;
}

main()
{
    long long t,n,i,sum=0,sum1=0;
    cin>>t;
    while(t--)
    {
        sum1=0;
        sum=0;
        cin>>n;
        long long a[n]={0};
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        sum1=max(Maximum_Sub_Array1(a,n),Maximum_Sub_Array2(a,n));
//        cout<<"HERE "<<sum1<<endl;
//        cout<<"HERE "<<sum<<endl;
        if(sum>sum1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
