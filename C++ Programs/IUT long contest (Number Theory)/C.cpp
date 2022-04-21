#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,cs=0,temp,temp2,temp3,temp4;
    long double n;
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>n;
        temp=ceil(sqrt(n));
        temp2=(temp-1)*(temp-1);
        temp3=n-temp2;
        if(temp%2==0)
        {
            if(temp3<=temp)
            {
                cout<<"Case "<<cs<<": "<<temp3<<" "<<temp<<endl;
            }
            else
            {
                temp4=temp3-temp;
                cout<<"Case "<<cs<<": "<<temp<<" "<<temp-temp4<<endl;
            }
        }
        else
        {
            if(temp3<=temp)
            {
                cout<<"Case "<<cs<<": "<<temp<<" "<<temp3<<endl;
            }
            else
            {
                temp4=temp3-temp;
                cout<<"Case "<<cs<<": "<<temp-temp4<<" "<<temp<<endl;
            }
        }
    }
    return 0;
}
