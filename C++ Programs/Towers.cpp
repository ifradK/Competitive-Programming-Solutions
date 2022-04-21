#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,cnt=0,p=1,mx=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        p=1;
        while(i<n-1 && a[i]==a[i+1])
        {
            p++;
            i++;
        }
        if(p>mx)
        {
            mx=p;
        }
        cnt++;
    }
    cout<<mx<<" "<<cnt;
    return 0;
}
