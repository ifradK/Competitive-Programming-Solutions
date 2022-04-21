#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,sum=0,middle;
    cin>>n;
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            sum=sum+a[i][j];
            a[i][j]=0;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=n-1-i; j>=0; j--)
        {
            sum=sum+a[i][j];
            a[i][j]=0;
            break;
        }
    }
    middle=(n-1)/2;
    for(i=0; i<n; i++)
    {
        for(j=middle; ; )
        {
            sum=sum+a[i][j];
            a[i][j]=0;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=middle; ; )
        {
            sum=sum+a[j][i];
            a[j][i]=0;
            break;
        }
    }
    cout<<sum;
    return 0;
}
