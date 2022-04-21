#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long n;
    cin>>n;
    string str;
    str=to_string(n);
    for(int i=0; i<str.size(); i++)
    {
        if(i==0 && str[0]=='9')
        {
            str[i]='9';
        }
        else
        {
            str[i]=48+min((int)str[i]-48,(9-((int)str[i]-48)));
        }
    }
    cout<<str;
    return 0;
}

