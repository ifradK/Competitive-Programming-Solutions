#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(y%x!=0)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            cout<<1<<" "<<y/x<<endl;
        }
    }
    return 0;
}
