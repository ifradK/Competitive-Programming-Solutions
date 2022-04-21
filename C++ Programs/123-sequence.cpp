#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long n,i,one=0,two=0,three=0;
    cin>>n;
    int a[n],b[3];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        else if(a[i]==2)
        {
            two++;
        }
        else if(a[i]==3)
        {
            three++;
        }
    }
    b[0]=one;
    b[1]=two;
    b[2]=three;
    sort(b,b+3);
    cout<<b[0]+b[1];
    return 0;
}
