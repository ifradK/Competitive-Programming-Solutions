#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int parent[1000];
int rankParent[1000];
int cnt;
string str;

void initializeSet(int n)
{
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rankParent[i]=0;
    }
    cnt=n;
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
    cnt--;
}

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        char initial;
        cin>>initial;
        initializeSet(initial-'A'+1);
        cin.ignore();
        while(getline(cin,str))
        {
            if(str.empty())
            {
                break;
            }
            unionSet(str[0]-'A',str[1]-'A');
        }
        cout<<cnt<<endl;
        if(t!=0)
        {
            cout<<endl;
        }
    }
    return 0;
}
