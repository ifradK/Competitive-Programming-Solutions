#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

int colour[200]= {0};
int parent[200]= {0};
int matrix[200][200]= {0};
bool flag=false;

void initialize()
{
    memset(colour,0,sizeof(colour));
    memset(parent,0,sizeof(parent));
}

void dfs2(int u, int vertex)
{
    if(flag==true)
    {
        colour[u]=GRAY;
    }
    flag=true;
    for(int i=1; i<=vertex; i++)
    {
        if(matrix[u][i]==1)
        {
            int v=i;
            if(colour[v]==WHITE)
            {
                parent[v]=u;
                dfs2(v,vertex);
            }
        }
    }
    //colour[u]=BLACK;
}

//void dfs(int vertex)
//{
//    for(int i=0;i<vertex;i++)
//    {
//        colour[i]=WHITE;
//    }
//    //time=0;
//    for(int i=0;i<vertex;i++)
//    {
//        if(colour[i]==WHITE)
//        {
//            dfs2(i,vertex);
//        }
//    }
//}

int main()
{
    fastio;
    int n,vertex,start,i,j,End,val,temp;
    bool flag1=false;
    while(1)
    {
        cin>>vertex;
        if(vertex==0)
        {
            break;
        }
        if(flag1==true)
        {
            cout<<endl;
        }
        flag1=true;
        initialize();
        memset(matrix,0,sizeof(matrix));
        for(i=0; ; i++)
        {
            cin>>start;
            if(start==0)
            {
                break;
            }
            for(j=0; ; j++)
            {
                cin>>End;
                if(End==0)
                {
                    break;
                }
                matrix[start][End]=1;
            }
        }
        temp=i;
        cin>>n;
        for(i=0; i<n; i++)
        {
            int cnt=0;
            initialize();
            colour[0]=-1;
            flag=false;
            cin>>val;
            if(temp==0)
            {
                cout<<"ANS "<<vertex<<" ";
                for(j=1; j<=vertex; j++)
                {
                    cout<<j<<" ";
                }
                if(i!=n-1)
                {
                    cout<<endl;
                }
                continue;
            }
            dfs2(val,vertex);
//            for(j=0; j<=vertex; j++)
//            {
//                cout<<colour[j]<<" ";
//            }
//            cout<<endl;
            for(j=1; j<=vertex; j++)
            {
                if(colour[j]==WHITE)
                {
                    cnt++;
                }
            }
            cout<<"ANS "<<cnt<<" ";
            for(j=1; j<=vertex; j++)
            {
                if(colour[j]==WHITE)
                {
                    cout<<j<<" ";
                }
            }
            if(i!=n-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}


