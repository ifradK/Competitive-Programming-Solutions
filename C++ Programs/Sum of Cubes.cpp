#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

bool is_integer(long double k)
{
    if(k!=0 && floor(k)==k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastio;
    ll t,x,i;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        long double temp;
        cin>>x;
        if(x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=1; i<=cbrt(x); i++)
        {
            temp=cbrt((long double)x-(long double)(i*i*i));
            if(is_integer(temp)==true)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
