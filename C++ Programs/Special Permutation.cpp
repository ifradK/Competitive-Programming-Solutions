#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=n;i>=1;i--)
        {
            if(i%2==1)
            {
                cout<<i<<" ";
            }
        }
        cout<<"4 ";
        for(i=2;i<=n;i++)
        {
            if(i%2==0 && i!=4)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
