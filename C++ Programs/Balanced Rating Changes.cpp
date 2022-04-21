#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,sum=0,diff,i;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
           b[i]=ceil((float)a[i]/2);
        }
        else
        {
           b[i]=floor((float)a[i]/2);
        }
        sum=sum+b[i];
    }
    if(sum==0)
    {
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<endl;
        }
    }
    else if(sum<0)
    {
        diff=abs(sum);
        i=0;
        while(diff!=0)
        {
            if(b[i]<0 && a[i]%2!=0)
            {
                b[i]=b[i]+1;
                diff=diff-1;
            }
            i++;
        }
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<endl;
        }
    }
    else if(sum>0)
    {
        diff=sum;
        i=0;
        while(diff!=0)
        {
            if(b[i]>0  && a[i]%2!=0)
            {
                b[i]=b[i]-1;
                diff=diff-1;
            }
            i++;
        }
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<endl;
        }
    }
    return 0;
}



