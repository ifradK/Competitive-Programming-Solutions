#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,mx=0,cnt=0;
    string a,b[2];
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=i;j<n-1;j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
            {
                cnt++;
            }
        }
        if(cnt>mx)
        {
            b[0]=a[i];
            b[1]=a[i+1];
            mx=cnt;
        }
    }
    cout<<b[0]<<b[1];
    return 0;
}
