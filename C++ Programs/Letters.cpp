#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,i,j,sum;
    cin>>n>>m;
    long long a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sum=a[0];
    for(i=0,j=0;i<m;i++)
    {
        if(b[i]<=sum)
        {
            if(j==0)
            {
                cout<<j+1<<" "<<b[i]<<endl;
            }
            else
            {
                cout<<j+1<<" "<<b[i]-(sum-a[j])<<endl;
            }
        }
        else
        {
            sum=sum+a[j+1];
            j++;
            i--;
        }
    }
    return 0;
}
