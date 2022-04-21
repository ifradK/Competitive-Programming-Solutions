#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define mx 100001

int  arr[mx];
int  tree[mx * 3];
int init(int  node, int  b, int  e)
{
    int x,y;
    if (b == e)
    {
        tree[node] = arr[b];
        return arr[b];
    }
    int  Left = node * 2;
    int  Right = node * 2 + 1;
    int  mid = (b + e) / 2;
    x=init(Left, b, mid);
    y=init(Right, mid + 1, e);
    tree[node] = min(x,y);
    return tree[node];
}

int rangeMinQuery(int b,int e,int q1,int q2, int node)
{
    int x,y;
    if(q1<=b && q2>=e)
    {
        return tree[node];
    }
    if(q1>e || q2<b)
    {
        return INT_MAX;
    }
    int mid=(b+e)/2;
    x=rangeMinQuery(b,mid,q1,q2,node*2);
    y=rangeMinQuery(mid+1,e,q1,q2,node*2+1);
    return min(x,y);
}

int main()
{
    fastio;
    int t,n,q,i,x,y,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        scanf("%d %d",&n,&q);
        for(i=1; i<n+1; i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        printf("Case %d:\n",cs);
        for(i=0; i<q; i++)
        {
            scanf("%d %d",&x,&y);
            printf("%d\n",rangeMinQuery(1,n,x,y,1));
        }
    }
    return 0;
}
