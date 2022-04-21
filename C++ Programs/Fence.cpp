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
        if(a+b<=c)
        {
            cout<<c-(a+b)+1<<endl;
        }
        else if(b+c<=a)
        {
            cout<<a-(c+b)+1<<endl;
        }
        else if(a+c<=b)
        {
            cout<<b-(a+c)+1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
