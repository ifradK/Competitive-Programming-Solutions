#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        vector<long long> v;
        cin>>n;
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        v.push_back(a[0]);
        for(i=0; i<n-1; )
        {
            long long mx,mn;
            if(a[i]<a[i+1])
            {
                mx=LONG_MIN;
                for(j=i+1; j<n; j++)
                {
                    if(mx<a[j])
                    {
                        mx=a[j];
                        if(j==n-1)
                        {
                            v.push_back(a[j]);
                            i=j;
                        }
                    }
                    else
                    {
                        v.push_back(a[j-1]);
                        i=j-1;
                        break;
                    }
                }
            }
            else
            {
                mn=LONG_MAX;
                for(j=i+1; j<n; j++)
                {
                    if(mn>a[j])
                    {
                        mn=a[j];
                        if(j==n-1)
                        {
                            v.push_back(a[j]);
                            i=j;
                        }
                    }
                    else
                    {
                        v.push_back(a[j-1]);
                        i=j-1;
                        break;
                    }
                }
            }
        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}

