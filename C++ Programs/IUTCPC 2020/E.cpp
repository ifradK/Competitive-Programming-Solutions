#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long tree[100005];

long long init(long long node, long long b, long long e, long long arr[])
{
    long long x,y;
    if(b==e)
    {
        tree[node]=arr[b];
        return arr[b];
    }
    long long Left=node*2,Right=(node*2)+1,mid=(b+e)/2;
    x=init(Left, b, mid, arr);
    y=init(Right, mid+1, e, arr);
    tree[node]=max(x,y);
    return tree[node];
}

long long rangeMaxQuery(long long node, long long b, long long e, long long i, long long j, long long arr[])
{
    long long x,y;
    if(i<=b && j>=e)
    {
        return tree[node];
    }
    if(i>e || j<b)
    {
        return long LONG_MIN;
    }
    long long mid=(b+e)/2,left=node*2, right=(node*2)+1;
    x=rangeMaxQuery(left,b,mid,i,j,arr);
    y=rangeMaxQuery(right,mid+1,e,i,j,arr);

    return max(x,y);
}

int main()
{
    fastio;
    long long t,n,i,m,p,l,r,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<long long, long long> mp;
        long long a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        init(1,1,n,a);
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>p>>l>>r;
            val=rangeMaxQuery(1,1,n,l,r,a);
            mp[p]=val;
        }
        long long h[m+1];
        for(i=1;i<=m;i++)
        {
            cin>>h[i];
        }
        long long sum=0,j;
        for(i=1;i<=m-1;i++)
        {
            sum=0;
            for(j=i+1;j<=m;j++)
            {
                if(h[j]<h[i])
                {
                    sum=sum+mp[h[j]];
                }
            }
            cout<<sum<<" ";
        }
        cout<<0;
        cout<<endl;
        mp.clear();
    }
    return 0;
}
