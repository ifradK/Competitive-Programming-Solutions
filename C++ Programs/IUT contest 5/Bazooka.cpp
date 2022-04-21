#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t;
    cin>>t;
    while(t--)
    {
        long double x,y,r,d,cosA,cosB,sinA,sinB,a,b;
        cin>>x>>y>>r;
        d=sqrt((x*x)+(y*y)-(r*r));
        cosA=d/sqrt((x*x)+(y*y));
        cosB=x/sqrt((x*x)+(y*y));
        sinA=r/sqrt((x*x)+(y*y));
        sinB=y/sqrt((x*x)+(y*y));
        a=d*(cosA*cosB-sinA*sinB);
        b=d*(sinA*cosB+cosA*sinB);
        cout<<fixed<<setprecision(6)<<a<<" "<<b<<endl;
    }
    return 0;
}
