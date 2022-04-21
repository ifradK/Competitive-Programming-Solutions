#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

int matrix[110][50010];
int main()
{
    fastio;
    long long n,m,i,j;
    cin>>n;
    while(n--)
    {
        cin>>m;
        long long a[m+1],sum=0,first=0,second=0;
        for(i=1;i<=m;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        a[0]=0;
        sort(a,a+m+1);
        for(i=0;i<=sum/2;i++)
        {
            matrix[0][i]=0;
        }
        for(i=0;i<=m;i++)
        {
            matrix[i][0]=1;
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=sum/2;j++)
            {
                if(a[i]>j)
                {
                    matrix[i][j]=matrix[i-1][j];
                }
                else
                {
                    matrix[i][j]=matrix[i-1][j-a[i]] || matrix[i-1][j];
                }
            }
        }
        for(j=sum/2;j>=0;j--)
        {
            if(matrix[m][j]==1)
            {
                first=j;
                break;
            }
        }
        second=sum-first;
        cout<<abs(first-second)<<endl;
    }
    return 0;
}
