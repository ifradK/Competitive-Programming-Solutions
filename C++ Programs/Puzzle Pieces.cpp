#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1 || m==1)
        {
            cout<<"YES"<<endl;
        }
        else if(n==2 && m==2)
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
