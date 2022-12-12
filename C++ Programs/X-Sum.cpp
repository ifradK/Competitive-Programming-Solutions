#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n][m],mx=LLONG_MIN,sum,x,y;
        for(i=0;i<n;i++){for(j=0;j<m;j++){cin>>a[i][j];}}
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum=a[i][j];
                for(x=i+1,y=j+1; x>=0 && x<n && y>=0 && y<m; x++,y++){sum=sum+a[x][y];}
                for(x=i+1,y=j-1; x>=0 && x<n && y>=0 && y<m; x++,y--){sum=sum+a[x][y];}
                for(x=i-1,y=j+1; x>=0 && x<n && y>=0 && y<m; x--,y++){sum=sum+a[x][y];}
                for(x=i-1,y=j-1; x>=0 && x<n && y>=0 && y<m; x--,y--){sum=sum+a[x][y];}
                mx=max(mx,sum);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
