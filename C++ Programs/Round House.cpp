#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b,i;
    cin>>n>>a>>b;
    if(b==0)
    {
        cout<<a;
        return 0;
    }
    else if(b>0)
    {
        for(i=a; ;b--)
        {
            i++;
            if(i==n+1)
            {
                i=1;
            }
            if(b==1)
            {
                cout<<i;
                return 0;
            }

        }
    }
    else if(b<0)
    {
        for(i=a; ;b++)
        {
            i--;
            if(i==0)
            {
                i=n;
            }
            if(b==-1)
            {
                cout<<i;
                return 0;
            }
        }
    }
    return 0;
}
