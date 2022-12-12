#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        bool flag1=false,flag2=false,flag3=false,flag4=false,flag5=false,flag6=false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                flag1=true;
            }
            if(a[i]%2==0)
            {
                flag2=true;
            }
        }

        for(i=0;i<n;i=i+2)
        {
            if(a[i]%2==1)
            {
                flag3=true;
            }
        }
        for(i=0;i<n;i=i+2)
        {
            if(a[i]%2==0)
            {
                flag4=true;
            }
        }
        for(i=1;i<n;i=i+2)
        {
            if(a[i]%2==1)
            {
                flag5=true;
            }
        }
        for(i=1;i<n;i=i+2)
        {
            if(a[i]%2==0)
            {
                flag6=true;
            }
        }

        if(flag1==false || flag2==false)
        {
            cout<<"YES"<<endl;
        }
        else if((flag3==true && flag4==false) && (flag5==false && flag6==true))
        {
            cout<<"YES"<<endl;
        }
        else if((flag3==false && flag4==true) && (flag5==true && flag6==false))
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
