#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,n,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        if(m<=min(a,b))
        {
            if(n+m<=a+b)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
