#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,i,j;
    cin>>a>>b>>c;
    for(i=0;a*i<=c;i++)
    {
        for(j=0;b*j<=c;j++)
        {
            if(a*i+b*j==c)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
