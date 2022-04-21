#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long i,n,sum,mx=0,cnt=2;
    cin>>n;
    long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n<=2)
    {
        cout<<n;
        return 0;
    }
    for(i=0; i<n-2; i++)
    {
        if(a[i]+a[i+1]==a[i+2])
        {
            cnt++;
        }
        else
        {
            if(cnt>mx)
            {
                mx=cnt;
            }
            cnt=2;
        }
    }
    if(cnt>mx)
    {
        mx=cnt;
    }
    cout<<mx;
    return 0;
}
