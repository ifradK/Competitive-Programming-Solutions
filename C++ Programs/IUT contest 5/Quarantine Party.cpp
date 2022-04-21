#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    unsigned long long m;
    cin>>m;
    if(m==0)
    {
        cout<<0;
        return 0;
    }
    if(m%2==0)
    {
        cout<<m+1;
    }
    else
    {
        cout<<(m+1)/2;
    }
    return 0;
}
