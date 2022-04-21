#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long double x1,x2,y1,y2,r1,r2,dist,small,big;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    dist=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    small=(r1>r2? r2:r1);
    big=(r1>r2? r1:r2);
    if(x1==x2 && y1==y2 && r1==r2)
    {
        cout<<-1;
    }
    else if(dist==r1+r2)
    {
        cout<<1;
    }
    else if(dist+small<big)
    {
        cout<<0;
    }
    else if(dist+small==big)
    {
        cout<<1;
    }
    else if(dist!=r1+r2 && r1+r2<dist)
    {
        cout<<0;
    }
    else if(dist!=r1+r2 && r1+r2>dist)
    {
        cout<<2;
    }
    return 0;
}
