#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long binarysearch(long long start, long long end, long long val, long long a[])
{
    while(start<=end)
    {
        long long middle=(start+end)/2;
        if(a[middle]==val)
        {
            return middle;
        }
        else if(a[middle]>val)
        {
            end=middle-1;
        }
        else if(a[middle]<val)
        {
            start=middle+1;
        }
    }
    return -1;
}

int main()
{
    fastio;
    long long n,q,a,val,cs=1,i;
    while(1)
    {
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        long long a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        a[0]=-1;
        sort(a,a+n+1);
        cout<<"CASE# "<<cs++<<":"<<endl;
        while(q--)
        {
            cin>>val;
            long long temp=binarysearch(1,n,val,a);
            if(temp==-1)
            {
                cout<<val<<" not found"<<endl;
            }
            else
            {
                for(i=temp-1;i>=0;i--)
                {
                    if(a[i]==val)
                    {
                        temp--;
                    }
                }
                cout<<val<<" found at "<<temp<<endl;
            }
        }
    }
    return 0;
}
