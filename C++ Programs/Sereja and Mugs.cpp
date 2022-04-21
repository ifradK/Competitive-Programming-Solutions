#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,s,i,sum=0;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    if(sum<=s)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
