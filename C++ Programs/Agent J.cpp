#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
#define ld long double
using namespace std;
int main()
{
    fastio;
    ll t,cs=1;
    ld r1,r2,r3,a,b,c,angle1,angle2,angle3,area1,area2,area3,s1,s2,s3,tot_area,semi_perimeter,ans;
    cin>>t;
    while(t--)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        angle1=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        angle2=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        angle3=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        s1=r1*angle2;
        s2=r2*angle3;
        s3=r3*angle1;
        area1=((r1*r1)*angle2)/2;
        area2=((r2*r2)*angle3)/2;
        area3=((r3*r3)*angle1)/2;
        semi_perimeter=(a+b+c)/2;
        tot_area=sqrt(semi_perimeter*(semi_perimeter-a)*(semi_perimeter-b)*(semi_perimeter-c));
        ans=tot_area-area1-area2-area3;
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}
