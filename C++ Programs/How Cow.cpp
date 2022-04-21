#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,x,x1,x2,y,y1,y2,m,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>m;
        cout<<"Case "<<cs++<<":"<<endl;
        while(m--)
        {
            cin>>x>>y;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
