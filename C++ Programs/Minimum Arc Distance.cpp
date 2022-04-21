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
    cin>>t;
    while(t--)
    {
        ld ox,oy,ax,ay,bx,by,oa,ab,bo,angle;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        oa=sqrt((ay-oy)*(ay-oy)+(ax-ox)*(ax-ox));
        bo=sqrt((by-oy)*(by-oy)+(bx-ox)*(bx-ox));
        ab=sqrt((ay-by)*(ay-by)+(ax-bx)*(ax-bx));
        angle=acos(((oa*oa)+(bo*bo)-(ab*ab))/(2*bo*oa));
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(8)<<oa*angle<<endl;
    }
    return 0;
}
