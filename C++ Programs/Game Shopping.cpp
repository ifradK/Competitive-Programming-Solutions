#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j,n,m,cnt=0;
    cin>>n>>m;
    int c[n],a[m];
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>a[j];
    }
    for(i=0,j=0;i<n,j<m;i++)
    {
        if(i==n || j==m)
        {
            break;
        }
        if(a[j]>=c[i])
        {
            cnt++;
            j++;
        }
    }
    cout<<cnt;
    return 0;
}
