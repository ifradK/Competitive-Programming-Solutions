#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long x,y,z,rem_x,rem_y,temp,temp2;
    cin>>x>>y>>z;
    cout<<(x+y)/z<<" ";
    rem_x=x%z;
    rem_y=y%z;
    if(rem_x>rem_y)
    {
        temp=x/z;
        temp2=((temp+1)*z-x);
        if(temp2<=rem_y)
        {
            cout<<temp2;
        }
        else
        {
            cout<<0;
        }
    }
    else
    {
        temp=y/z;
        temp2=((temp+1)*z-y);
        if(temp2<=rem_x)
        {
            cout<<temp2;
        }
        else
        {
            cout<<0;
        }
    }
    return 0;
}
