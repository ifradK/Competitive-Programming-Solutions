#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long x,y;
    cin>>x>>y;
    if(x>=y)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
