#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,j;
    cin>>n>>m;
    string a[m],b[m],c[n];
    for(i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(c[i]==a[j])
            {
                break;
            }
        }
        a[j].size()<=b[j].size()? cout<<a[j]<<endl : cout<<b[j]<<endl;
    }
    return 0;
}
