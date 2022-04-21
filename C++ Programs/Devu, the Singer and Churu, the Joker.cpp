#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,d,i,sum=0,minutes,remain;
    cin>>n>>d;
    int t[n];
    for(i=0;i<n;i++)
    {
        cin>>t[i];
        sum=sum+t[i];
    }
    minutes=d-sum-(10*(n-1));
    if(minutes<0)
    {
        cout<<-1;
    }
    else
    {
        remain=(d-sum)/5;
        cout<<remain;
    }
    return 0;
}
