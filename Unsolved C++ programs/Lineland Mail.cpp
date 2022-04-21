#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,max1=0,min1=1000000000,diff,i,j;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        max1=0;
        min1=1000000000;
        diff=0;
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                diff=(a[i]-a[j]);
                if(fabs(diff)>max1)
                {
                    max1=fabs(diff);
                }
                if(diff<min1)
                {
                    min1=fabs(diff);
                }
            }
        }
        cout<<min1<<" "<<max1<<endl;
    }
    return 0;;
}

