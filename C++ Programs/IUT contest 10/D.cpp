#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"*"<<endl;
    }
    else if(a==b && a!=c)
    {
        cout<<"C"<<endl;
    }
    else if(b==c && b!=a)
    {
        cout<<"A"<<endl;
    }
    else if(a==c && b!=a)
    {
        cout<<"B"<<endl;
    }
    return 0;
}
