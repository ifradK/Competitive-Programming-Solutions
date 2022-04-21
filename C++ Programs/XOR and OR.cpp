#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i;
    bool flag=false,flag1=false;
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"YES";
    }
    else if(a.size()!=b.size())
    {
        cout<<"NO";
    }
    else
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='1')
            {
                flag=true;
                break;
            }
        }
        for(i=0;i<b.size();i++)
        {
            if(b[i]=='1')
            {
                flag1=true;
                break;
            }
        }
        if(flag==true && flag1==true && a.size()>1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
