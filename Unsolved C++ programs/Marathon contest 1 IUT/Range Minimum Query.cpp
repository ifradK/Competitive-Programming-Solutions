#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;

void constructTree(long input[], long segTree[], ll low, ll high, ll pos)
{
    if(low==high)
    {
        segTree[pos]=input[low];
        return;
    }
    ll mid=(high+low)/2;
    constructTree(input,segTree,low,mid,2*pos+1);
    constructTree(input,segTree,mid+1,high,2*pos+2);
    segTree[pos]=min(segTree[2*pos+1],segTree[2*pos+2]);
}

ll rangeMinQuery(long segTree[], ll qlow, ll qhigh, ll low, ll high, ll pos)
{
    if(qlow<=low && qhigh>=high)       //Total overlap
    {
        return segTree[pos];
    }
    if(qlow>high || qhigh<low)        //No overlap
    {
        return INT_MAX;
    }
    ll mid=(high+low)/2;
    return min(rangeMinQuery(segTree,qlow,qhigh,low,mid,2*pos+1),rangeMinQuery(segTree,qlow,qhigh,mid+1,high,2*pos+2));
}

main()
{
    fastio;
    ll n,q,i;
    cin>>n;
    long a[n];
    long segTree[4*n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    constructTree(a,segTree,0,n-1,0);
    cin>>q;
    long x[q],y[q];
    for(i=0;i<q;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<q;i++)
    {
        cout<<rangeMinQuery(segTree,x[i],y[i],0,n-1,0)<<endl;
    }
    return 0;
}
