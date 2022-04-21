#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(n==2)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<m*2<<endl;
        }
    }
    return 0;
}
