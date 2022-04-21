#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int parent[6000];
int rankParent[6000];

void initializeSet(int n)
{
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rankParent[i]=0;
    }
}

int findParent(int x)
{
    if(x!=parent[x])
    {
        return parent[x]=findParent(parent[x]);
    }
    else
    {
        return x;
    }
}

void unionSet(int x,int y)
{
    int px=findParent(x);
    int py=findParent(y);
    if(px==py)
    {
        return;
    }

    if(rankParent[px]<rankParent[py])
    {
        parent[px]=py;
    }
    else if(rankParent[px]>rankParent[py])
    {
        parent[py]=px;
    }
    else
    {
        parent[py]=px;
        rankParent[px]++;
    }
}

int mostFrequent(int arr[], int n)
{
    sort(arr,arr+n);

    int max_count=1,res=arr[0],curr_count=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            curr_count++;
        }
        else
        {
            if(curr_count>max_count)
            {
                max_count=curr_count;
                res=arr[i-1];
            }
            curr_count=1;
        }
    }

    if(curr_count>max_count)
    {
        max_count=curr_count;
        res=arr[n-1];
    }
    //return res for the element
    //return max_count for the number of times the element appeared
    return max_count;
}

int main()
{
    fastio;
    int c,r,cnt,i;
    string name,r1,r2;
    while(cin>>c>>r)
    {
        if(c==0 && r==0)
        {
            break;
        }
        initializeSet(c);
        map<string,int> mp;
        cnt=0;
        for(i=0;i<c;i++)
        {
            cin>>name;
            mp[name]=cnt;
            cnt++;
        }
        for(i=0;i<r;i++)
        {
            cin>>r1;
            cin>>r2;
            unionSet(mp[r1],mp[r2]);
        }
        for(i=0;i<c;i++)
        {
            findParent(i);
        }
        int ans=mostFrequent(parent,c);
        cout<<ans<<endl;
        mp.clear();
        cin.ignore();
    }
    return 0;
}

