#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b,i,mid,cnt=0;
    cin>>n>>a>>b;
    int str[n];
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    sort(str,str+n);
    mid=n-a;
    for(i=str[mid-1];i<str[mid];i++)
    {
        cnt++;
    }
    cout<<cnt;
    return 0;
}
