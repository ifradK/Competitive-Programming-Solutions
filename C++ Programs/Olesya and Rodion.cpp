#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,n,t;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1;
    }
    else
    {
        cout<<t;
        if(t==10)
        {
            for(i=2; i<n; i++)
            {
                cout<<0;
            }
        }
        else
        {
            for(i=1; i<n; i++)
            {
                cout<<0;
            }
        }

    }
    return 0;
}
