#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,n,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(a<b)
        {
            i=0;
            while(1)
            {
                if(a>n || b>n)
                {
                    break;
                }
                if(i%2==0)
                {
                    a=a+b;
                }
                else
                {
                    b=b+a;
                }
                i++;
            }
        }
        else
        {
            i=0;
            while(1)
            {
                if(a>n || b>n)
                {
                    break;
                }
                if(i%2==0)
                {
                    b=b+a;
                }
                else
                {
                    a=a+b;
                }
                i++;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}

