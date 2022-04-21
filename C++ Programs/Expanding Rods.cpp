#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
#define ld long double
using namespace std;
#define pi acos(-1)
int main()
{
    fastio;
    ll t,i,j,cs=1;
    long double l,n,c,l2,c1,Start,End,mid,s1,s2,s;
    cin>>t;
    while(t--)
    {
        cin>>l>>n>>c;
        l2=l*(1+(n*c));
        c1=l/2;
        Start=0;
        End=l;
        ll temp=60;
        while(temp--)
        {
            mid=(ld)(Start+End)/(ld)2;
            s1=((ld)(c1*c1)/(ld)(2*mid))+(ld)(mid/2);
            s2=2*asin((ld)c1/(ld)s1);
            s=s1*s2;
            if((ld)s/(ld)l2==1)
            {
                break;
            }
            else if(s>l2)
            {
                End=mid;
            }
            else
            {
                Start=mid;
            }
        }
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<mid<<endl;
    }
    return 0;
}
