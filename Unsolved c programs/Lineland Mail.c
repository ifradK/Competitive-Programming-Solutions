#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,max=0,min=1000000000,diff,i,j;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        max=0;
        min=1000000000;
        diff=0;
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                diff=(a[i]-a[j]);
                if(fabs(diff)>max)
                {
                    max=fabs(diff);
                }
                if(diff<min)
                {
                    min=fabs(diff);
                }
            }
        }
        cout<<min<<max<<endl;
    }
    return 0;;
}
