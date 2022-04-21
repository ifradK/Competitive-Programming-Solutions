#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
main()
{
    int i,j,length,cnt=0;
    string s,t;
    cin>>s>>t;
    i=s.size()-1;
    j=t.size()-1;
    length=s.size()+t.size();
    if(s==t)
    {
        cout<<0;
        return 0;
    }
    for( ; ; )
    {
        if(s[i]==t[j])
        {
            cnt=cnt+2;
        }
        else
        {
            break;
        }
        i--;
        j--;
    }
    cout<<length-cnt;
    return 0;
}
