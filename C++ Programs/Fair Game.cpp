#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,b,c,bcnt=0,ccnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    c=a[0];
    for(i=1;i<n;i++)
    {
        if(c!=a[i])
        {
            b=a[i];
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=c && a[i]!=b)
        {
            cout<<"NO";
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            bcnt++;
        }
        else if(a[i]==c)
        {
            ccnt++;
        }
    }
    if(bcnt==ccnt)
    {
        cout<<"YES"<<endl;
        cout<<c<<" "<<b;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
