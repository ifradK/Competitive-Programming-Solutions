#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int t,n,i;
    int zero,one;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        zero=-1,one=n;
        cin>>str;
        for(i=n-1; i>=0; i--)
        {
            if(str[i]=='0')
            {
                zero=i;
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                one=i;
                break;
            }
        }
        if(one<zero)
        {
            for(i=0; i<one; i++)
            {
                cout<<str[i];
            }
            for(i=zero; i<n; i++)
            {
                cout<<str[i];
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                cout<<str[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
