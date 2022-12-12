#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        if(n%3==0 || n%3==2)
        {
            for(i=0; ; i++)
            {
                if(i%2==0)
                {
                    sum=sum+2;
                    if(sum>n)
                    {
                        break;
                    }
                    cout<<2;
                }
                else
                {
                    sum=sum+1;
                    if(sum>n)
                    {
                        break;
                    }
                    cout<<1;
                }
            }
        }
        else
        {
            for(i=1; ; i++)
            {
                if(i%2==0)
                {
                    sum=sum+2;
                    if(sum>n)
                    {
                        break;
                    }
                    cout<<2;
                }
                else
                {
                    sum=sum+1;
                    if(sum>n)
                    {
                        break;
                    }
                    cout<<1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
