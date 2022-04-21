#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
#define ld long double
using namespace std;
int main()
{
    fastio;
    ll x,temp=0,temp1;
    cin>>x;
    if(x%11==0)
    {
        temp=(x/11)*2;
    }
    else
    {
        temp=(x/11)*2;
        temp1=x%11;
        if(temp1>6)
        {
            temp=temp+2;
        }
        else
        {
            temp++;
        }
    }
    cout<<temp;
    return 0;
}
