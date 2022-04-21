#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    int black=0,white=0,i,j;
    string a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            white=0;
            black=0;
            if(a[i][j]=='.')
            {
                white++;
            }
            if(a[i+1][j]=='.')
            {
                white++;
            }
            if(a[i+1][j+1]=='.')
            {
                white++;
            }
            if(a[i][j+1]=='.')
            {
                white++;
            }
            if(a[i][j]=='#')
            {
                black++;
            }
            if(a[i+1][j]=='#')
            {
                black++;
            }
            if(a[i+1][j+1]=='#')
            {
                black++;
            }
            if(a[i][j+1]=='#')
            {
                black++;
            }

            if(white>=3 || black>=3)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
