#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int matrix[203][10003];
int colour[203],cnt=0;
vector<int> v1;

int bicolour(int i, int c, int node)
{
    int j;
    colour[i]=c;
    v1.push_back(i);
    for(j=0; j<node; j++)
    {
        if(matrix[i][j]==1)
        {
            if(colour[j]==0)
            {
                if(bicolour(j,3-c,node)==0)
                {
                    return 0;
                }
            }
            else if(colour[j]==c)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    fastio;
    int t,v,e,x,y,i,j;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        int one=0,two=0;
        cin>>v>>e;
        cnt=0;
        memset(matrix,0,sizeof(matrix));
        memset(colour,0,sizeof(colour));
        for(i=0; i<e; i++)
        {
            cin>>x>>y;
            matrix[x][y]=1;
            matrix[y][x]=1;
        }
        for(i=0; i<v; i++)
        {
            one=0;
            two=0;
            if(colour[i]==0)
            {
                int temp=bicolour(i,1,v);
                if(temp==0)
                {
                    v1.clear();
                    flag=true;
                    break;
                }
                else if(temp==1)
                {
                    if(v1.size()==1)
                    {
                        cnt++;
                        v1.clear();
                    }
                    else
                    {
                        for(j=0; j<v1.size(); j++)
                        {
                            if(colour[v1[j]]==1)
                            {
                                one++;
                            }
                            else
                            {
                                two++;
                            }
                        }
                        cnt=cnt+min(one,two);
                        v1.clear();
                    }
                }
            }
        }
        if(flag==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
//        for(i=0; i<v; i++)
//        {
//            cout<<colour[i]<<" ";
//        }
//        cout<<endl;
    }
    return 0;
}

