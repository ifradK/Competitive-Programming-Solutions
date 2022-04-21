#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,k,ans=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[j]!=0)
                {
                    if(a[j]%a[i]==0)
                    {
                        a[j]=0;
                    }
                }
            }

        }
        if(a[i]!=0)
        {
           a[i]=0;
           ans++;
        }
    }
    cout<<ans;
    return 0;
}
