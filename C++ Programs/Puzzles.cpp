#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,m,minimum,minimum1=10000;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a, a+m);
    for(i=0;i<=m-n;i++)
    {
      minimum=a[i+n-1]-a[i];
      if(minimum<minimum1)
      {
          minimum1=minimum;
      }
    }
    printf("%d",minimum1);
    return 0;
}
