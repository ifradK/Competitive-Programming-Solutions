#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long i;
    string a;
    cin>>a;
    for(i=0;i<a.size()-1;i++)
    {
        if(a[i]=='/' && a[i+1]=='/')
        {
             a.erase(a.begin() + i);
             i--;
        }
    }
    for(i=a.size()-1;i>0;i--)
    {
        if(a[i]=='/')
        {
            a.erase(a.begin() + i);
            i++;
        }
        else
        {
            break;
        }
    }
    cout<<a;
    return 0;
}
