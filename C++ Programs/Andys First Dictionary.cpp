#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    set<string> s;
    string str,str2="";
    while(cin>>str)
    {
        string str2="";
        char c;
        for(long long i=0; i<str.size(); i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                c=str[i]+32;
                str2=str2+c;
            }
            else if(str[i]>=97 && str[i]<=122)
            {
                str2=str2+str[i];
            }
            else
            {
                if(str2!="")
                {
                    s.insert(str2);
                }
                str2="";
            }
        }
        if(str2!="")
        {
            s.insert(str2);
        }
    }
    for(auto it:s)
    {
        cout<<it<<endl;
    }
    return 0;
}
