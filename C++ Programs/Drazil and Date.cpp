#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,s,total;
    cin>>a>>b>>s;
    total=abs(a)+abs(b);
    if(total>s)
    {
        cout<<"No";
    }
    else if(total==s)
    {
        cout<<"Yes";
    }
    else
    {
        if(total%2==0)
        {
            if(s%2==0)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<"No";
            }
        }
        else
        {
            if(s%2==0)
            {
                cout<<"No";
            }
            else
            {
                cout<<"Yes";
            }
        }
    }
    return 0;
}
