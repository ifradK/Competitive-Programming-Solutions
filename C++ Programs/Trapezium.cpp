#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,cs=1;
    long double a,b,c,d,x,h,area;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        x=((d*d)-(b*b)+(abs(a-c)*fabs(a-c)))/(2*fabs(a-c));
        h=sqrt((d*d)-(x*x));
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(8)<<((a+c)/2)*h<<endl;
    }
    return 0;
}
