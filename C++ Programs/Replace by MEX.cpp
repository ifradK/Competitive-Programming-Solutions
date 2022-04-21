#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long find_mex(long long a[], long long n)
{
    long long i,b[n+1];
    memset(b,0,sizeof(b));
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<=n;i++)
    {
        if(b[i]==0)
        {
            return i;
        }
    }
}

long long find_pos(long long a[], long long n)
{
    for(long long i=0;i<n;i++)
    {
        if(a[i]!=i)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],cnt=0;
        vector<long long> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long mex=find_mex(a,n);
        while(1)
        {
            cnt++;
            if(mex==n)
            {
                long long pos=find_pos(a,n);
                if(pos==n)
                {
                    break;
                }
                a[pos]=mex;
                v.push_back(pos+1);
            }
            else
            {
                a[mex]=mex;
                v.push_back(mex+1);
            }
            mex=find_mex(a,n);
        }

        cout<<cnt-1<<endl;
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
