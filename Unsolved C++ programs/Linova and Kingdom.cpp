#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

long long parent[100000000];

long long findParent(long long x)
{
    long long cnt=0;
    while(1)
    {
        if(parent[x]==0)
        {
            return cnt;
        }
        else
        {
            x=parent[x];
            cnt++;
        }
    }
}

int main()
{
    fastio;
    long long n,k,ans=0,i,h,start,End;
    cin>>n>>k;
    long long height[n+1];
    memset(height,0,sizeof(height));
    memset(parent,0,sizeof(parent));
    for(i=0; i<n-1; i++)
    {
        cin>>start>>End;
        parent[End]=start;
    }
    for(i=2; i<=n; i++)
    {
        h=findParent(i);
        height[i]=h;
    }
    for(i=0; i<=n; i++)
    {
        cout<<height[i]<<" ";
    }
    cout<<endl;
    sort(height,height+n+1,greater<long long>());
    for(i=0; i<k; i++)
    {
        ans=ans+height[i];
    }
    cout<<ans;
    return 0;
}






/*
int main()
{
    fastio;
    long long n,k;
    cin>>n>>k;
    vector<long long> v[n+1];
    for(i=0;i<n-1;i++)
    {
        cin>>start>>End;
        v[start].push_back(End);
    }
    for(i=2;i<=n;i++)
    {
        if(v[i].empty()==true)
        {

        }
    }
}
*/
