#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,a=0,b=0,c=0;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
        else if(str[i]=='b')
        {
            b++;
        }
        else if(str[i]=='c')
        {
            c++;
        }
        if((str[i]=='c' && str[i+1]=='b') || (str[i]=='b' && str[i+1]=='a') || (str[i]=='c' && str[i+1]=='a'))
        {
            cout<<"NO";
            return 0;
        }
    }
    if(a<1 || b<1 || c<1)
    {
        cout<<"NO";
        return 0;
    }
    if(c!=a && c!=b)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
