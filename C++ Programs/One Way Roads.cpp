#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    int t,n,a,b,c,i,j,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int matrix[n+1][n+1]= {0};
        memset(matrix,0,sizeof(matrix));
        for(i=0; i<n; i++)
        {
            cin>>a>>b>>c;
            matrix[a][b]=c;
        }
        int node=1,prev=0,sum1=0,sum2=0,temp,temp1;
        for(i=0; i<n; i++)
        {
            bool flag=false;
            for(j=1; j<=n; j++)
            {
                if(matrix[node][j]>0 && j!=prev)
                {
                    if(i==0)
                    {
                        temp1=j;
                    }
                    prev=node;
                    temp=j;
                    flag=true;
                    break;
                }
            }
            if(flag==true)
            {
                node=temp;
            }
            else
            {
                for(j=1; j<=n; j++)
                {
                    if(matrix[j][node]>0 && j!=prev)
                    {
                        if(i==0)
                        {
                            temp1=j;
                        }
                        sum1=sum1+matrix[j][node];
                        prev=node;
                        node=j;
                        break;
                    }
                }
            }
        }
        node=1,prev=temp1;
        for(i=0; i<n; i++)
        {
            bool flag=false;
            for(j=1; j<=n; j++)
            {
                if(matrix[node][j]>0 && j!=prev)
                {
                    prev=node;
                    temp=j;
                    flag=true;
                    break;
                }
            }
            if(flag==true)
            {
                node=temp;
            }
            else
            {
                for(j=1; j<=n; j++)
                {
                    if(matrix[j][node]>0 && j!=prev)
                    {
                        sum2=sum2+matrix[j][node];
                        prev=node;
                        node=j;
                        break;
                    }
                }
            }
        }
        cout<<"Case "<<cs++<<": "<<min(sum1,sum2)<<endl;
    }
    return 0;
}
