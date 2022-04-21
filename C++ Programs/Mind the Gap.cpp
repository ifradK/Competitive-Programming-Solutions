#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,s,i,extra;
    cin>>n>>s;
    int h[n],m[n];
    for(i=0; i<n; i++)
    {
        cin>>h[i]>>m[i];
    }
    if(h[0]*60+m[0]>=s+1)
    {
        cout<<0<<" "<<0;
        return 0;
    }
    for(i=0; i<n-1; i++)
    {
        if((h[i+1]*60+m[i+1])-(h[i]*60+m[i])>=s*2+2)
        {
            if(s+m[i]>60)
            {
                extra=1+s+m[i]-60;
                if(extra==60)
                {
                    cout<<h[i]+2<<" "<<0;
                }
                else
                {
                    cout<<h[i]+1<<" "<<extra;
                }
            }
            else if(s+m[i]==60)
            {
                cout<<h[i]+1<<" "<<1;
            }
            else
            {
                if(m[i]+s+1==60)
                {
                    cout<<h[i]+1<<" "<<0;
                }
                else
                {
                    cout<<h[i]<<" "<<m[i]+s+1;
                }
            }
            return 0;
        }
    }
    if(s+m[n-1]>60)
    {
        extra=1+s+m[n-1]-60;
        if(extra==60)
        {
            cout<<h[n-1]+2<<" "<<0;
        }
        else
        {
            cout<<h[n-1]+1<<" "<<extra;
        }
    }
    else if(s+m[n-1]==60)
    {
        cout<<h[n-1]+1<<" "<<1;
    }
    else
    {
        if(m[n-1]+s+1==60)
        {
            cout<<h[n-1]+1<<" "<<0;
        }
        else
        {
            cout<<h[n-1]<<" "<<m[n-1]+s+1;
        }

    }
    return 0;
}
