#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,p,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>p>>a>>b>>c;
        if((p%a)==0 || (p%b)==0 || (p%c)==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<min(a-(p%a),min(b-(p%b),c-(p%c)))<<endl;
        }
    }
    return 0;
}
