#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,x[3],a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>x[0]>>x[1]>>x[2];
        sort(x,x+3);
        if(x[1]!=x[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<x[0]<<" "<<x[0]<<" "<<x[2]<<endl;
        }
    }
    return 0;
}
