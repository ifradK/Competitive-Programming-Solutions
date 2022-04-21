#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str[n];
        vector<string> v1[127],v2[127];
        for(i=0; i<n; i++)
        {
            cin>>str[i];
        }

        j=9;
        for(i=0; i<n; i++)
        {
            v1[(int)str[i][j]].push_back(str[i]);
        }
        while(1)
        {
            j--;
            if(j<0)
            {
                break;
            }

            if(j%2==0)
            {
                for(i=0; i<127; i++)
                {
                    for(k=0; k<v1[i].size(); k++)
                    {
                        v2[(int)v1[i][k][j]].push_back(v1[i][k]);
                    }
                }
                for(i=0; i<127; i++)
                {
                    v1[i].clear();
                }
            }
            else
            {
                for(i=0; i<127; i++)
                {
                    for(k=0; k<v2[i].size(); k++)
                    {
                        v1[(int)v2[i][k][j]].push_back(v2[i][k]);
                    }
                }
                for(i=0; i<127; i++)
                {
                    v2[i].clear();
                }
            }
        }
        for(i=0; i<127; i++)
        {
            for(j=0; j<v2[i].size(); j++)
            {
                cout<<v2[i][j]<<endl;
            }
        }
        for(i=0; i<127; i++)
        {
            v1[i].clear();
            v2[i].clear();
        }
    }
    return 0;
}
