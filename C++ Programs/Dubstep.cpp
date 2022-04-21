#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int length,i,j=0,space=2;
    string a;
    cin>>a;
    length=a.size();
    for(i=0;i<length-2;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            a[i]=' ';
            a.erase(i+1,2);
            i--;
        }
    }
    while(space>1)
    {
        space=0;
        for(i=0;i<length;i++)
        {
            if(a[i]==' ')
            {
                space++;
            }
            else
            {
                break;
            }
        }
        for(i=0;i<length;i++)
        {
            if(a[i]==' ' && a[i+1]==' ')
            {
                a.erase(a.begin()+i);
            }
        }
    }
    if(a[0]==' ')
    {
        a.erase(a.begin());
    }
    cout<<a;
    return 0;
}
