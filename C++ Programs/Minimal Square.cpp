#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,mx;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            mx=max(2*a,b);
            cout<<mx*mx<<endl;
        }
        else
        {
            mx=max(a,2*b);
            cout<<mx*mx<<endl;
        }
    }
    return 0;
}
