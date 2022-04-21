#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t;
    long double n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        n=n-2;
        if(n<0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<1+ceil(n/x)<<endl;
        }
    }
    return 0;
}
