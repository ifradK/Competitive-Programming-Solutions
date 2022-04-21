#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long h,w,i,j,k;
    cin>>h>>w;
    string matrix[h];
    bool flag=false;
    for(i=0; i<h; i++)
    {
        cin>>matrix[i];
    }
    if(h<3 || w<3)
    {
        cout<<"NO";
        return 0;
    }
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            if(matrix[i][j]=='*')
            {
                bool flag1=false,flag2=false,flag3=false,flag4=false;
                matrix[i][j]='A';
                k=j+1;
                while(k<w)
                {
                    if(matrix[i][k]=='.')
                    {
                        break;
                    }
                    flag1=true;
                    matrix[i][k]='A';
                    k++;
                }
                k=j-1;
                while(k>=0)
                {
                    if(matrix[i][k]=='.')
                    {
                        break;
                    }
                    flag2=true;
                    matrix[i][k]='A';
                    k--;
                }
                k=i-1;
                while(k>=0)
                {
                    if(matrix[k][j]=='.')
                    {
                        break;
                    }
                    flag3=true;
                    matrix[k][j]='A';
                    k--;
                }
                k=i+1;
                while(k<h)
                {
                    if(matrix[k][j]=='.')
                    {
                        break;
                    }
                    flag4=true;
                    matrix[k][j]='A';
                    k++;
                }

                if(flag1==true && flag2==true && flag3==true && flag4==true)
                {
                    flag=true;
                    break;
                }
                else
                {
                    matrix[i][j]='*';
                    if(flag1==true)
                    {
                        k=j+1;
                        while(k<w)
                        {
                            if(matrix[i][k]=='.')
                            {
                                break;
                            }
                            matrix[i][k]='*';
                            k++;
                        }
                    }
                    if(flag2==true)
                    {
                        k=j-1;
                        while(k>=0)
                        {
                            if(matrix[i][k]=='.')
                            {
                                break;
                            }
                            matrix[i][k]='*';
                            k--;
                        }
                    }
                    if(flag3==true)
                    {
                        k=i-1;
                        while(k>=0)
                        {
                            if(matrix[k][j]=='.')
                            {
                                break;
                            }
                            matrix[k][j]='*';
                            k--;
                        }
                    }
                    if(flag4==true)
                    {
                        k=i+1;
                        while(k<h)
                        {
                            if(matrix[k][j]=='.')
                            {
                                break;
                            }
                            matrix[k][j]='*';
                            k++;
                        }
                    }
                }
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    if(flag==true)
    {
        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                if(matrix[i][j]=='*')
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
