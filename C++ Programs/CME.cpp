#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long q,n,i,a,b,c;
    cin>>q;
    while(q--)
    {
        cin>>n;
        a=0;
        b=0;
        c=0;
        if(n==2)
        {
            cout<<"2"<<endl;
        }
        else if(n%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}

