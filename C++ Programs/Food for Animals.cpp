#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        x>=a?x=x-a:x=0;
        y>=b?y=y-b:y=0;
        cout<<(x+y<=c?"YES":"NO")<<endl;
    }
    return 0;
}
