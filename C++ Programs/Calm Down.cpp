#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
#define pi acos(-1)
int main()
{
    fastio;
    ll t,n,cs=1;
    long double r,R,angle,r1;
    cin>>t;
    while(t--)
    {
        cin>>R>>n;
        angle=pi/n;
        r=(R*sin(angle))/(1+sin(angle));
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<r<<endl;
    }
    return 0;
}
