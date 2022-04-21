#include<iostream>
#include<string.h>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long r,c,i,j,x,y,len=0;
    cin>>r>>c;
    string a[r];
    getchar();
    for(i=0; i<r; i++)
    {
        getline(cin,a[i]);
    }
    cin>>x>>y;
    getchar();
    x=x-1;
    y=y-1;
//    char str[10010]={0};
//    scanf("%s",&str);
//    len=strlen(str);
    string str;
    getline(cin,str);
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='L')
        {
            for(j=y; ; j--)
            {
                if(a[x][j]=='O')
                {
                    cout<<"YES";
                    return 0;
                }
                if(a[x][j]=='*')
                {
                    y=j+1;
                    break;
                }
            }
        }
        else if(str[i]=='R')
        {
            for(j=y; ; j++)
            {
                if(a[x][j]=='O')
                {
                    cout<<"YES";
                    return 0;
                }
                if(a[x][j]=='*')
                {
                    y=j-1;
                    break;
                }
            }
        }
        else if(str[i]=='B')
        {
            for(j=x; ; j++)
            {
                if(a[j][y]=='O')
                {
                    cout<<"YES";
                    return 0;
                }
                if(a[j][y]=='*')
                {
                    x=j-1;
                    break;
                }
            }
        }
        else if(str[i]=='T')
        {
            for(j=x; ; j--)
            {
                if(a[j][y]=='O')
                {
                    cout<<"YES";
                    return 0;
                }
                if(a[j][y]=='*')
                {
                    x=j+1;
                    break;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}
