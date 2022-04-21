#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t,i;
    long long x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x-y>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
