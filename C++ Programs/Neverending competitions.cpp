#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,cnt=0;
    cin>>n;
    string a;
    char b[n][8];
    cin>>a;
    for(i=0; i<n; i++)
    {
        for(j=0; j<8; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[0]==b[i][5] && a[1]==b[i][6] && a[2]==b[i][7])
        {
            cnt++;
        }
    }
    if(cnt>=ceil((float)n/2))
    {
        cout<<"home";
    }
    else
    {
        cout<<"contest";
    }
    return 0;
}
