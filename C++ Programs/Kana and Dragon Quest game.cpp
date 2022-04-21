#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,x,n,m,i,result;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        for(i=0;i<n;i++)
        {
            if(x<21)
            {
                break;
            }
            x=(x/2)+10;
        }
        result=x-(m*10);
        if(result<=0)
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
