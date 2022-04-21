#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fastio;
    long long n,q,r,c;
    cin>>n>>q;
    int matrix[3][n+1]={0};
    memset(matrix,0,sizeof(matrix));
    long long cnt=0;
    while(q--)
    {
        cin>>r>>c;
        if(matrix[r][c]==0)
        {
            matrix[r][c]=1;
            if(r==1)
            {
                if(matrix[r+1][c-1]==1 && c>=1){cnt++;}
                if(matrix[r+1][c]==1){cnt++;}
                if(matrix[r+1][c+1]==1 && c<=n){cnt++;}
            }
            else if(r==2)
            {
                if(matrix[r-1][c-1]==1 && c>=1){cnt++;}
                if(matrix[r-1][c]==1){cnt++;}
                if(matrix[r-1][c+1]==1 && c<=n){cnt++;}
            }
        }
        else if(matrix[r][c]==1)
        {
            matrix[r][c]=0;
            if(r==1)
            {
                if(matrix[r+1][c-1]==1 && c>=1){cnt--;}
                if(matrix[r+1][c]==1){cnt--;}
                if(matrix[r+1][c+1]==1 && c<=n){cnt--;}
            }
            else if(r==2)
            {
                if(matrix[r-1][c-1]==1 && c>=1){cnt--;}
                if(matrix[r-1][c]==1){cnt--;}
                if(matrix[r-1][c+1]==1 && c<=n){cnt--;}
            }
        }
        if(cnt==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}


