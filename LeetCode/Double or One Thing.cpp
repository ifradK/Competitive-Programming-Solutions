#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,cs=1,i,j;
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<<cs++<<": ";
        string a,b;
        bool flag=false;
        cin>>a;
        for(i=0; i<a.size()-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<a<<endl;
        }
        else
        {
            bool flag1=false;
            for(i=0; i<a.size()-1; i++)
            {
                if(a[i]<a[i+1])
                {
                    flag1=true;
                    break;
                }
            }
            if(flag1==true)
            {
                for(i=0; i<a.size()-1; i++)
                {
                    if(a[i]<=a[i+1])
                    {
                        cout<<a[i]<<a[i];
                    }
                    else
                    {
                        cout<<a[i];
                    }
                }
                cout<<a[a.size()-1];
            }
            else
            {
                cout<<a;
            }
            cout<<endl;
        }
    }
    return 0;
}
