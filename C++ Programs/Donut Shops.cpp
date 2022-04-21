#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        if(a>=c)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<1<<" ";
        }

        if(a*b<=c)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
    return 0;
}
