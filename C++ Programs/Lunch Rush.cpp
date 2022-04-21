#include<iostream>
#include <bits/stdc++.h>
using namespace std;
long long mx=-9000000000;
main()
{
    long long n,k,f,t,i,joy;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        joy=0;
        cin>>f>>t;
        if(t>k)
        {
            joy=f-t+k;
        }
        else
        {
            joy=f;
        }
        if(joy>mx)
        {
            mx=joy;
        }
    }
    cout<<mx;
    return 0;
}
