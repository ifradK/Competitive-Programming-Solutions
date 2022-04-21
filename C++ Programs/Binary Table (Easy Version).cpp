#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        long long cnt=0;
        cin>>n>>m;
        string mat[n];
        char a1,a2,a3,a4;
        vector<long long> v[3*n*m+5];
        for(i=0; i<n; i++)
        {
            cin>>mat[i];
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<m-1; j++)
            {
                a1=mat[i][j];
                a2=mat[i+1][j];
                a3=mat[i][j+1];
                a4=mat[i+1][j+1];

                if(a1=='0' && a2=='0' && a3=='0' && a4=='0')
                {
                    continue;
                }
                else if(a1=='0' && a2=='0' && a3=='0' && a4=='1')
                {
                    continue;
                }
                else if(a1=='0' && a2=='0' && a3=='1' && a4=='0')
                {
                    mat[i+1][j]='1';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='1';
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='0' && a2=='0' && a3=='1' && a4=='1')
                {
                    mat[i+1][j]='1';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='0' && a2=='1' && a3=='0' && a4=='0')
                {
                    if(j!=m-2)
                    {
                        mat[i+1][j]='0';
                        mat[i][j+1]='1';
                        mat[i+1][j+1]='1';
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+2);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                }
                else if(a1=='0' && a2=='1' && a3=='0' && a4=='1')
                {
                    if(j!=n-2)
                    {
                        mat[i+1][j]='0';
                        mat[i][j+1]='1';
                        mat[i+1][j+1]='0';
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+2);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                }
                else if(a1=='0' && a2=='1' && a3=='1' && a4=='0')
                {
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='1';
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='0' && a2=='1' && a3=='1' && a4=='1')
                {
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='0' && a3=='0' && a4=='0')
                {
                    if(j==m-2)
                    {
                        mat[i][j]='0';
                        mat[i+1][j]='1';
                        mat[i+1][j+1]='1';
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                    else
                    {
                        mat[i][j]='0';
                        mat[i][j+1]='1';
                        mat[i+1][j+1]='1';
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+2);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                }
                else if(a1=='1' && a2=='0' && a3=='0' && a4=='1')
                {
                    if(j==m-2)
                    {
                        mat[i][j]='0';
                        mat[i+1][j]='1';
                        mat[i+1][j+1]='0';
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                    else
                    {
                        mat[i][j]='0';
                        mat[i][j+1]='1';
                        mat[i+1][j+1]='0';
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+1);
                        v[cnt].push_back(i+1);
                        v[cnt].push_back(j+2);
                        v[cnt].push_back(i+2);
                        v[cnt].push_back(j+2);
                        cnt++;
                    }
                }
                else if(a1=='1' && a2=='0' && a3=='1' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='1';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='0' && a3=='1' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='1' && a3=='0' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i+1][j+1]='1';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='1' && a3=='0' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='1' && a3=='1' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a1=='1' && a2=='1' && a3=='1' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
            }
        }

//        for(i=0; i<n; i++)
//        {
//            cout<<mat[i]<<endl;
//        }
        for(i=n-2;i>=0;i--)
        {
            for(j=m-2; j>=0; j--)
            {
                a1=mat[i][j];
                a2=mat[i+1][j];
                a3=mat[i][j+1];
                a4=mat[i+1][j+1];

                if(a2=='0' && a3=='0' && a4=='0')
                {
                    continue;
                }
                else if(a2=='0' && a3=='0' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='0' && a3=='1' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='0' && a3=='1' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='1' && a3=='0' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='1' && a3=='0' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='1' && a3=='1' && a4=='0')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
                else if(a2=='1' && a3=='1' && a4=='1')
                {
                    mat[i][j]='0';
                    mat[i+1][j]='0';
                    mat[i][j+1]='0';
                    mat[i+1][j+1]='0';
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+1);
                    v[cnt].push_back(i+1);
                    v[cnt].push_back(j+2);
                    v[cnt].push_back(i+2);
                    v[cnt].push_back(j+2);
                    cnt++;
                }
            }
        }

//        for(i=0; i<n; i++)
//        {
//            cout<<mat[i]<<endl;
//        }
        cout<<cnt<<endl;
        for(i=0; i<cnt; i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<" "<<v[i][3]<<" "<<v[i][4]<<" "<<v[i][5]<<endl;
        }
        for(i=0; i<cnt; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}

/*
2 3
010
000
*/
