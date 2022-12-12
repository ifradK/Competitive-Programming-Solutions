#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(1900<=n){cout<<"Division 1"<<endl;}
        else if(1600<=n && n<=1899){cout<<"Division 2"<<endl;}
        else if(1400<=n && n<=1599){cout<<"Division 3"<<endl;}
        else if(n<=1399){cout<<"Division 4"<<endl;}
    }
    return 0;
}

