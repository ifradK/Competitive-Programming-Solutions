#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long n,sum=0,cnt=0;
    cin>>n;
    long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            sum=sum+a[i];
            cnt++;
        }
    }
    int mn=a[0];
    if(cnt==0)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]>mn)
            {
                mn=a[i];
            }
        }
        cout<<mn<<" "<<1;
        return 0;
    }
    cout<<sum<<" "<<cnt;
    return 0;
}

