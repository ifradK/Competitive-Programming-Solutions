#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,j;
    bool flag=false;
    cin>>n;
    long long a[n],x[n],y[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            x[i]=a[i];
            y[i]=a[i+1];
        }
        else
        {
            y[i]=a[i];
            x[i]=a[i+1];
        }
    }
    if(n<3)
    {
        cout<<"no";
    }
    else
    {
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(i!=j)
                {
                    if(x[i]<x[j] && x[j]<y[i] && y[i]<y[j])
                    {
                        cout<<"yes";
                        flag=true;
                        break;
                    }
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        if(flag==false)
        {
            cout<<"no";
        }
    }
    return 0;
}
