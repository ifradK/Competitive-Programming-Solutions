#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
#define mod 1000000007
int main()
{
    fastio;
    long long x,y,z,n,temp,temp1,temp2;
    cin>>x>>y>>n;
    z=y-x;
    temp2=ceil((double)n/3);
    temp1=temp2%2;
    if(n%3==1 && temp1==1)
    {
        if(x<0)
        {
            if(x==-mod){cout<<0;return 0;}
            x=x*(-1);
            temp=floor(((long double)x/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-x;
        }
        else
        {
            cout<<x%mod;
        }
    }
    if(n%3==1 && temp1==0)
    {
        x=x*(-1);
        if(x<0)
        {
            if(x==-mod){cout<<0;return 0;}
            x=x*(-1);
            temp=floor(((long double)x/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-x;
        }
        else
        {
            cout<<x%mod;
        }
    }
    else if(n%3==2 && temp1==1)
    {
        if(y<0)
        {
            if(y==-mod){cout<<0;return 0;}
            y=y*(-1);
            temp=floor(((long double)y/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-y;
        }
        else
        {
            cout<<y%mod;
        }
    }
    else if(n%3==2 && temp1==0)
    {
        y=y*(-1);
        if(y<0)
        {
            if(y==-mod){cout<<0;return 0;}
            y=y*(-1);
            temp=floor(((long double)y/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-y;
        }
        else
        {
            cout<<y%mod;
        }
    }
    else if(n%3==0 && temp1==1)
    {
        if(z<0)
        {
            if(z==-mod){cout<<0;return 0;}
            z=z*(-1);
            temp=floor(((long double)z/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-z;
        }
        else
        {
            cout<<z%mod;
        }
    }
    else if(n%3==0 && temp1==0)
    {
        z=z*(-1);
        if(z<0)
        {
            if(z==-mod){cout<<0;return 0;}
            z=z*(-1);
            temp=floor(((long double)z/(long double)mod)+1);
            temp=temp*mod;
            cout<<temp-z;
        }
        else
        {
            cout<<z%mod;
        }
    }
    return 0;
}
