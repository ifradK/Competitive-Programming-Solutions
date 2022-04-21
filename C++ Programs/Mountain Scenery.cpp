#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    int n,k,i;
    cin>>n>>k;
    int a[2*n+1];
    for(i=0;i<2*n+1;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<2*n+1;i=i+2)
    {
        if(k==0)
        {
            break;
        }
        a[i]=a[i]-1;
        k--;
        if(a[i]<=a[i-1] || a[i]<=a[i+1])
        {
            a[i]=a[i]+1;
            k++;
        }
    }
    for(i=0;i<2*n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
