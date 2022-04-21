#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    string a,b;
    long long i;
    cin>>a>>b;
    if(a.size()>b.size())
    {
        cout<<">";
    }
    else if(a.size()<b.size())
    {
        cout<<"<";
    }
    else
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]>b[i])
            {
                cout<<">";
                return 0;
            }
            else if(a[i]<b[i])
            {
                cout<<"<";
                return 0;
            }
        }
        cout<<"=";
    }
    return 0;
}
