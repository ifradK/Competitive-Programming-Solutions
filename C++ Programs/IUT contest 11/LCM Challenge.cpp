#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else if(n==2)
    {
        cout<<2;
    }
    else if(n==3)
    {
        cout<<6;
    }
    else
    {
        if(n%2==1)
        {
            cout<<n*(n-1)*(n-2);
        }
        else
        {
            if(n%3==0)
            {
                cout<<(n-1)*(n-2)*(n-3);
            }
            else
            {
                cout<<n*(n-1)*(n-3);
            }
        }
    }
    return 0;
}
