#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool flag=false;
            while(n>1)
            {
                n=n/2;
                if(n%2==1 && n!=1)
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
    }
    return 0;
}
