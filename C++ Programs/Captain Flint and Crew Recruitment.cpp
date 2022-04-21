#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<31)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n-30==6)
            {
                if(n<=30)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
                }
            }
            else if(n-30==10)
            {
                if(n<=30)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
                }
            }
            else if(n-30==14)
            {
                if(n<=30)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
            }
        }
    }
    return 0;
}
