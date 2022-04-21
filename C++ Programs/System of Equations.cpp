#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,j,Max,cnt=0;
    cin>>n>>m;
    Max=max(n,m);
    for(i=0;i<=Max;i++)
    {
        for(j=0;j<=Max;j++)
        {
            if(((i*i)+j==n) && ((j*j)+i==m))
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
