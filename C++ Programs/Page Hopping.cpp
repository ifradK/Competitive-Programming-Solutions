#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int matrix[201][201];
bool present[201];
long long ans=0,total=0;

void floydWarshall(int node)
{
    int i,j,k;
    for(k=1; k<=node; k++)
    {
        for(i=1; i<=node; i++)
        {
            for(j=1; j<=node; j++)
            {
                if(matrix[i][k] + matrix[k][j] < matrix[i][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
}

void init()
{
    ans=0;
    total=0;
    memset(present,false,sizeof(present));
    memset(matrix,63,sizeof(matrix));
    for(int i=0,j=0; i<201,j<201; i++,j++)
    {
        matrix[i][j]=0;
    }
}

int main()
{
    fastio;
    int flag=0,i,j,k,x,y,cs=0;
    init();
    while(1)
    {
        scanf("%d %d", &x, &y);
        if(x==0 && y==0)
        {
            flag++;
            cs++;
            if(flag==2)
            {
                break;
            }
            floydWarshall(200);
            for(i=1; i<201; i++)
            {
                for(j=1; j<201; j++)
                {
                    if(i==j)
                    {
                        continue;
                    }
                    if(present[i]==true && present[j]==true)
                    {
                        ans=ans+matrix[i][j];
                        total++;
                    }
                }
            }
            double result=(double)ans/(double)total;
            printf("Case %d: average length between pages = %.3f clicks\n",cs,result);
            init();
        }
        else
        {
            flag=0;
            matrix[x][y]=1;
            present[x]=true;
            present[y]=true;
        }
    }
    return 0;
}

//            for(i=0;i<=10;i++)
//            {
//                for(j=0;j<=10;j++)
//                {
//                    cout<<matrix[i][j]<<" ";
//                }
//                cout<<endl;
//            }
//            cout<<endl;
