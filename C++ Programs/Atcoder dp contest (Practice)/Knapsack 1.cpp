#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,weight,i,j;
    cin>>n>>weight;
    long long matrix[n+1][weight+1]={0};
    memset(matrix,0,sizeof(matrix));
    long long a[n],w[n];
    for(i=1;i<=n;i++)
    {
        cin>>w[i]>>a[i];
    }
    memset(matrix,0,sizeof(matrix));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=weight;j++)
        {
            if(w[i]>j)
            {
                matrix[i][j]=matrix[i-1][j];
            }
            else
            {
                matrix[i][j]=max(a[i]+matrix[i-1][j-w[i]],matrix[i-1][j]);
            }
        }
    }
    cout<<matrix[n][weight];
    return 0;
}
