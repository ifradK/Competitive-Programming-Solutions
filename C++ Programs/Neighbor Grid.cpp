#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long a[n][m];
        bool flag=false,flag1=false,flag2=false,flag3=false,flag4=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }


        if(a[0][0]>2 || a[0][m-1]>2 || a[n-1][0]>2 || a[n-1][m-1]>2)
        {
            cout<<"NO"<<endl;
            continue;
        }


        for(j=1;j<m-1;j++)
        {
            if(a[0][j]>3)
            {
                flag=true;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==true)
        {
            continue;
        }


        for(j=1;j<m-1;j++)
        {
            if(a[n-1][j]>3)
            {
                flag1=true;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag1==true)
        {
            continue;
        }


        for(i=1;i<n-1;i++)
        {
            if(a[i][0]>3)
            {
                flag2=true;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag2==true)
        {
            continue;
        }


        for(i=1;i<n-1;i++)
        {
            if(a[i][m-1]>3)
            {
                flag3=true;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag3==true)
        {
            continue;
        }


        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                if(a[i][j]>4)
                {
                    flag4=true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag4==true)
            {
                break;
            }
        }
        if(flag4==true)
        {
            continue;
        }

        cout<<"YES"<<endl;
        a[0][0]=2;
        a[0][m-1]=2;
        a[n-1][0]=2;
        a[n-1][m-1]=2;

        for(j=1;j<m-1;j++)
        {
            a[0][j]=3;
        }

        for(j=1;j<m-1;j++)
        {
            a[n-1][j]=3;
        }

        for(i=1;i<n-1;i++)
        {
            a[i][0]=3;
        }

        for(i=1;i<n-1;i++)
        {
            a[i][m-1]=3;
        }

        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                a[i][j]=4;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
