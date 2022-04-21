#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,t,i,j,k,cnt=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cnt=0;
        cin>>n;
        long a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(k=0;k<n-2;k++)
        {
            cnt++;
            if(a[n-2]<=cnt)
            {
                cnt--;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
