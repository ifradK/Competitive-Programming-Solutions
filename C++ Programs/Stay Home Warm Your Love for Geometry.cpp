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
    long double t,ab,bc,ac,ad,dc,bd,temp;
    cin>>t;
    while(t--)
    {
        cin>>ab>>bc;
        ac=sqrt((ab*ab)+(bc*bc));
        temp=90-(90-(acos(bc/ac)*180/pi));
        ad=sin(temp*pi/180)*ab;
        dc=ac-ad;
        bd=cos(temp*pi/180)*ab;
        //cout<<"HERE "<<ab<<" "<<bc<<" "<<ac<<" "<<ad<< " "<<dc<<" "<<bd<<endl;
        cout<<fixed<<setprecision(6)<<(ad*ad)+(dc*bd)-(bd*bd)<<endl;
    }
    return 0;
}
