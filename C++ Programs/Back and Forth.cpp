#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll i,x1,x2,y1,y2,xdif,ydif;
    cin>>x1>>y1>>x2>>y2;
    xdif=x2-x1;
    ydif=y2-y1;
    for(i=0;i<ydif;i++)
    {
        cout<<"U";
    }
    for(i=0;i<xdif;i++)
    {
        cout<<"R";
    }
    for(i=0;i<ydif;i++)
    {
        cout<<"D";
    }
    for(i=0;i<xdif;i++)
    {
        cout<<"L";
    }
    xdif++;
    ydif++;
    cout<<"L";
    for(i=0;i<ydif;i++)
    {
        cout<<"U";
    }
    for(i=0;i<xdif;i++)
    {
        cout<<"R";
    }
    cout<<"DR";
    for(i=0;i<ydif;i++)
    {
        cout<<"D";
    }
    for(i=0;i<xdif;i++)
    {
        cout<<"L";
    }
    cout<<"U";
    return 0;
}
