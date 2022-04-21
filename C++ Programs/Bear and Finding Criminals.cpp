#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,n,i,j,cnt=0;
    cin>>n>>a;
    int t[n];
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    if(t[a-1]==1)
    {
        t[a-1]=0;
        cnt++;
    }
    for(i=a-2,j=a; ;i--,j++)
    {
        if(i==-1 || j==n)
        {
            break;
        }
        if(t[i]==1 && t[j]==1)
        {
            t[i]=0;
            t[j]=0;
            cnt=cnt+2;
        }
        else if((t[i]==0 && t[j]==1) || (t[i]==1 && t[j]==0))
        {
            t[i]=0;
            t[j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(t[i]==1)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
