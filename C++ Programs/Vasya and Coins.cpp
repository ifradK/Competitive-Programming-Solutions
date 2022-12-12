#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0 && b==0){cout<<1<<endl;}
        else if(a==0){cout<<1<<endl;}
        else if(b==0){cout<<a+1<<endl;}
        else{cout<<a+2*b+1<<endl;}
    }
}
