#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long mx=-1;
        long long a[n];
        vector<char> v[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        if(a[0]==0)
        {
            for(i=0;i<=mx;i++)
            {
                v[0].push_back('z');
            }
        }
        else
        {
            for(j=0; j<a[0]; j++)
            {
                v[0].push_back('a');
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                for(j=0; j<=mx; j++)
                {
                    if(v[i][j]!='z')
                    {
                        v[i+1].push_back('z');
                    }
                    else
                    {
                        v[i+1].push_back('y');
                    }
                }
                continue;
            }
            for(j=0; j<a[i]; j++)
            {
                v[i+1].push_back(v[i][j]);
            }
            if(i%2==0)
            {
                for(k=j; k<mx; k++)
                {
                    if(v[i][k]!='b')
                    {
                        v[i+1].push_back('b');
                    }
                    else
                    {
                        v[i+1].push_back('c');
                    }
                }
            }
            else
            {
                for(k=j; k<mx; k++)
                {
                    if(v[i][k]!='c')
                    {
                        v[i+1].push_back('c');
                    }
                    else
                    {
                        v[i+1].push_back('b');
                    }
                }
            }
        }
        for(i=0; i<n+1; i++)
        {
            for(j=0; j<v[i].size(); j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
