#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
main()
{
    int a,b,n,i,c,left;
    cin>>a>>b>>n;
    left=n;
    for(i=1; ;i++)
    {
        if(i%2!=0)
        {
            c=__gcd(a,left);
            left=left-c;
            if(left<0)
            {
                cout<<1;
                return 0;
            }
        }
        else
        {
           c=__gcd(b,left);
           left=left-c;
           if(left<0)
            {
                cout<<0;
                return 0;
            }
        }
    }
    return 0;
}
