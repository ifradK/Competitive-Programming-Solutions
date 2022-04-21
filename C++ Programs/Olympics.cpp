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
    ll t,cs=1;
    cin>>t;
    while(t--)
    {
        char ch;
        long double a,b,r,angle,s,x;
        cin>>a>>ch>>b;
        r=sqrt((a*a)+(b*b))/2;
        angle=(acos(((2*r*r)-(b*b))/(2*r*r)))*180/pi;
        s=r*angle*pi/180;
        x=400/(2*(s+a));
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<a*x<<" "<<b*x<<endl;
    }
    return 0;
}
