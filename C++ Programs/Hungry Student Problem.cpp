#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

bool solve(int x)
{
    if(x==0)
    {
        return true;
    }
    else if(x<0)
    {
        return false;
    }
    else
    {
        if(solve(x-3)==true)
        {
            return true;
        }
        if(solve(x-7)==true)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fastio;
    long long n,x,temp;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(solve(x)==true)
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
