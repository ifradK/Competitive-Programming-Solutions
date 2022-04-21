#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,x,y,temp,temp2;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        temp=n%x;
        if(temp==y)
        {
            cout<<n<<endl;
        }
        else if(temp>y)
        {
            temp2=temp-y;
            cout<<n-temp2<<endl;
        }
        else
        {
            n=n-temp;
            cout<<n-(x-y)<<endl;
        }
    }
    return 0;
}
