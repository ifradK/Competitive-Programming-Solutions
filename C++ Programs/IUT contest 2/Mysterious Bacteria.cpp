#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i,cs=0,b,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cs++;
        cin>>n;
        if(n>0)
        {
            for(b=2; b*b<=n; b++)
            {
                long long p=1,value=0;
                while(value<=n)
                {
                    value=pow(b,p);
                    if(value==n)
                    {
                        flag=1;
                        cout<<"Case "<<cs<<": "<<p<<endl;
                        break;
                    }
                    else if(value>n)
                    {
                        break;
                    }
                    else
                    {
                        p++;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"Case "<<cs<<": "<<1<<endl;
            }
        }
        else
        {
            for(b=-2; b*abs(b)>=n; b--)
            {
                long long p=1,value=0;
                while(value>=n)
                {
                    value=pow(b,p);
                    if(value==n)
                    {
                        flag=1;
                        cout<<"Case "<<cs<<": "<<p<<endl;
                        break;
                    }
                    else if(value<n)
                    {
                        break;
                    }
                    else
                    {
                        p++;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"Case "<<cs<<": "<<1<<endl;
            }
        }
    }
    return 0;
}
