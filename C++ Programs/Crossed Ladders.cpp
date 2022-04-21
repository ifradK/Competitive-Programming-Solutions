#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,cs=1,err=1e-7;
    scanf("%lld",&t);
    while(t--)
    {
        long double x,y,c,high,low,dis,height;
        scanf("%llf %llf %llf",&x,&y,&c);
        low=0;
        high=min(x,y);
        while(1)
        {
            dis=((high-low)/2)+low;
            height=sqrt(x*x-dis*dis)*sqrt(y*y-dis*dis)/(sqrt(x*x-dis*dis)+sqrt(y*y-dis*dis));
            if(fabs(height-c)<=err)
            {
                break;
            }
            if(height>c)
            {
                low=dis;
            }
            else
            {
                high=dis;
            }
            cout<<"HERE "<<x<<" "<<y<<" "<<c<< " "<<dis<<" "<<height<<endl;
        }
        printf("Case %lld: %.10llf\n",cs++,dis);
        //cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<dis<<endl;
    }
    return 0;
}
