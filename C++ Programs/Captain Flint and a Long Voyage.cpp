#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=ceil((float)n/4);
        for(i=1;i<=n-temp;i++)
        {
            cout<<9;
        }
        for(i=1;i<=temp;i++)
        {
            cout<<8;
        }
        cout<<endl;
    }
    return 0;
}
