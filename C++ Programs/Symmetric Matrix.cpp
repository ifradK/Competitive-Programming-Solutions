#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,x1,x2,x3,x4;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        cin>>n>>m;
        for(i=0;i<2*n;i++)
        {
            if(i%2==0)
            {
                cin>>x1>>x2;
            }
            else
            {
                cin>>x3>>x4;
                if(x2==x3)
                {
                    flag=true;
                }
            }
        }
        if(flag==true && m%2==0)
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
