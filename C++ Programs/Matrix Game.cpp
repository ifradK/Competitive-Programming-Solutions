#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,cnt,k,i,j,temp,p;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>m;
        long long a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        k=0;
        p=0;
        while(k<m && p<n)
        {
            bool flag=false;
            for(i=0;i<n;i++)
            {
                if(a[i][k]==1)
                {
                    k++;
                    flag=true;
                    break;
                }
            }
            for(j=0;j<m;j++)
            {
                if(a[p][j]==1)
                {
                    p++;
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                k++;
                p++;
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }
    }
    return 0;
}

