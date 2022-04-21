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
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        {
            if(n==1)
            {
                cout<<1<<endl;
            }
            else if(n==3)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<2+(n-3)/2<<endl;
            }
        }
    }
    return 0;
}
