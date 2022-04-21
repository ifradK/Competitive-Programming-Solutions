#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ll temp=max(a,max(b,c));
        if(a==b && b==c)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==temp && a==b)
        {
            cout<<1<<" "<<1<<" "<<temp-c+1<<endl;
        }
        else if(b==temp && b==c)
        {
            cout<<temp-a+1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==temp && a==c)
        {
            cout<<1<<" "<<temp-b+1<<" "<<1<<endl;
        }
        else if(a==temp)
        {
            cout<<0<<" "<<temp-b+1<<" "<<temp-c+1<<endl;
        }
        else if(b==temp)
        {
            cout<<temp-a+1<<" "<<0<<" "<<temp-c+1<<endl;
        }
        else if(c==temp)
        {
            cout<<temp-a+1<<" "<<temp-b+1<<" "<<0<<endl;
        }
    }
    return 0;
}
