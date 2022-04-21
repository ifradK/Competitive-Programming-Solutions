#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    string a;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        char b[n],c[n];
        cin>>a;
        for(i=0; i<n; i++)
        {
            if(a[i]=='2' && flag==1)
            {
                b[i]='0';
                c[i]='2';
            }
            else if(a[i]=='2')
            {
                b[i]='1';
                c[i]='1';
            }
            else if(a[i]=='1')
            {
                if(flag==1)
                {
                    b[i]='0';
                    c[i]='1';
                }
                else
                {
                    b[i]='1';
                    c[i]='0';
                    flag=1;
                }
            }
            else if(a[i]=='0')
            {
                b[i]='0';
                c[i]='0';
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
        for(i=0; i<n; i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
