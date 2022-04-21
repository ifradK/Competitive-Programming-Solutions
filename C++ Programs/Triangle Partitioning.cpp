#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    long double ab,ac,bc,r;
    ll t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>ab>>ac>>bc>>r;
        cout<<fixed<<setprecision(10)<<"Case "<<cs++<<": "<<sqrt((1/(1+1/r))*(ab*ab))<<endl;
    }
    return 0;
}
