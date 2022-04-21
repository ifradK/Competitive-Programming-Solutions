#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

struct Node
{
    int x,y,pos=0,id;
    int adj[1003]={0};

}node[1003];

bool repaired[1003]={0};

int distance(int i, int j)
{
    return ((node[i].x-node[j].x)*(node[i].x-node[j].x))+((node[i].y-node[j].y)*(node[i].y-node[j].y));
}

int main()
{
    fastio;
    int n,d,i,j,p1,p2,temp1,temp2,fix;
    char ch;
    cin>>n>>d;
    memset(repaired,false,sizeof(repaired));
    for(i=1;i<=n;i++)
    {
        cin>>node[i].x>>node[i].y;
        node[i].id=i;
        node[i].pos=0;
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(distance(i,j)<=d*d)
            {
                node[i].adj[node[i].pos++]=j;
                node[j].adj[node[j].pos++]=i;
            }
        }
    }
    while(cin>>ch)
    {
        if(ch=='S')
        {
            cin>>p1>>p2;
            if(node[p1].id==node[p2].id)
            {
                cout<<"SUCCESS"<<endl;
            }
            else
            {
                cout<<"FAIL"<<endl;
            }
        }
        else
        {
            cin>>fix;
            if(repaired[fix]==true)
            {
                continue;
            }
            else
            {
                repaired[fix]=true;
            }
            temp1=node[fix].id;
            for(i=0;i<node[fix].pos;i++)
            {
                temp2=node[node[fix].adj[i]].id;
                if(repaired[node[fix].adj[i]]==false)
                {
                    continue;
                }
                for(j=1;j<=n;j++)
                {
                    if(repaired[j]==true && temp2==node[j].id)
                    {
                        node[j].id=temp1;
                    }
                }
            }
        }
    }
    return 0;
}




//
//#include<stdio.h>
//#include <string.h>
//
//struct Node
//{
//    int x,y,pos,id;
//    int adj[1003];
//
//}node[1003];
//
//int repaired[1003]={0};
//
//int distance(int i, int j)
//{
//    return ((node[i].x-node[j].x)*(node[i].x-node[j].x))+((node[i].y-node[j].y)*(node[i].y-node[j].y));
//}
//
//int main()
//{
//    int n,d,i,j,p1,p2,temp1,temp2,fix;
//    char ch[2];
//    scanf("%d %d",&n,&d);
//    memset(repaired,0,sizeof(repaired));
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d %d",&node[i].x,&node[i].y);
//        node[i].id=i;
//        node[i].pos=0;
//    }
//    for(i=1;i<n;i++)
//    {
//        for(j=i+1;j<=n;j++)
//        {
//            if(distance(i,j)<=d*d)
//            {
//                node[i].adj[node[i].pos++]=j;
//                node[j].adj[node[j].pos++]=i;
//            }
//        }
//    }
//    while(scanf("%s",ch)==1)
//    {
//        if(ch[0]=='S')
//        {
//            scanf("%d %d",&p1,&p2);
//            if(node[p1].id==node[p2].id)
//            {
//                printf("SUCCESS\n");
//            }
//            else
//            {
//                printf("FAIL\n");
//            }
//        }
//        else
//        {
//            scanf("%d",&fix);
//            if(repaired[fix]==1)
//            {
//                continue;
//            }
//            else
//            {
//                repaired[fix]=1;
//            }
//            temp1=node[fix].id;
//            for(i=0;i<node[fix].pos;i++)
//            {
//                temp2=node[node[fix].adj[i]].id;
//                if(repaired[node[fix].adj[i]]==0)
//                {
//                    continue;
//                }
//                for(j=1;j<=n;j++)
//                {
//                    if(repaired[j]==1 && temp2==node[j].id)
//                    {
//                        node[j].id=temp1;
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
