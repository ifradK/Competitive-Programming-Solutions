#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll cs=1;
    long double t,w1,w2,h1,h2,area,total;
    cin>>t;
    while(t--)
    {
        cin>>w1>>h1>>w2>>h2;
        total=(w1+w2)*max(h1,h2);
        area=(h1*w1)+(h2*w2);
        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(2)<<total-((total-area)/2)<<endl;
    }
    return 0;
}
