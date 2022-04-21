#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long i,j,t,r,c,val,dimension,dist,ans=0,cs=0;
    cin>>t;
    while(t--)
    {
        ans=0;
        cs++;
        cin>>r>>c;
        dimension=r+c;
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                cin>>val;
                if(i==r && j==c)
                {
                    break;
                }
                if(val>0)
                {
                    dist=dimension-i-j;
                    if(dist%2!=0)
                    {
                        ans=ans^val;
                    }
                }
            }
        }
        if(ans==0)
        {
            cout<<"Case "<<cs<<": "<<"lose"<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<"win"<<endl;
        }
    }
    return 0;
}
