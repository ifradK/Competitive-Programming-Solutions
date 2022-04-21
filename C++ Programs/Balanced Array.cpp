#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=2;i<=n;i=i+2)
            {
                cout<<i<<" ";
                temp=i;
            }
            for(i=1,j=1;i<=(n/2)-1;i++,j=j+2)
            {
                cout<<j<<" ";
            }
            cout<<temp+i-1<<endl;
        }
    }
    return 0;
}
