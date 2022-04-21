#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,len,cnt,n,m,mn=2000;
    string s,t;
    cin>>n>>m;
    cin>>s>>t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i]==t[j])
            {
                len=0;
                cnt=0;
                for(k=j;k<j+n;k++)
                {
                    if(s[i+len]!=t[j+len])
                    {
                        cnt++;
                    }
                    len++;
                }
                if(cnt<mn)
                {
                    mn=cnt;
                }
            }
        }
    }
    cout<<mn;
}
