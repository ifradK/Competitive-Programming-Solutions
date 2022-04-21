#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long lcm(long long a, long long b)
{
    return (a*b)/__gcd(a, b);
}

int main()
{
    fastio;
    long long a,b,LCM,d,m;
    cin>>a>>b;
    LCM=lcm(a,b);
    d=LCM/a;
    m=LCM/b;
    if(d<m){m--;}
    else{d--;}
    if(d>m){cout<<"Dasha";}
    else if(m>d){cout<<"Masha";}
    else{cout<<"Equal";}
    return 0;
}
