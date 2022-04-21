#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long a[n+1][m+1],ans=0,b[4];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>a[i][j];
            }
        }
        float s,n1=ceil((float)n/2),m1=ceil((float)m/2);
        for(i=1; i<=n1; i++)
        {
            for(j=1; j<=m1; j++)
            {
                b[0]=a[i][j];
                b[1]=a[i][m-j+1];
                b[2]=a[n-i+1][j];
                b[3]=a[n-i+1][m-j+1];
                sort(b,b+4);
                s=ceil((float)(b[1]+b[2])/2);
                ans=ans+fabs(a[i][j]-s)+fabs(a[i][m-j+1]-s)+fabs(a[n-i+1][j]-s)+fabs(a[n-i+1][m-j+1]-s);
                if(j==m1 && m%2==1)
                {
                    ans=ans-fabs(a[i][j]-s)-fabs(a[n-i+1][m-j+1]-s);
                }
                if(i==n1 && n%2==1)
                {
                    ans=ans-fabs(a[i][j]-s)-fabs(a[n-i+1][m-j+1]-s);
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
