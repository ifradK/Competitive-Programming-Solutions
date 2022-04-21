#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str[n];
        bool flag=false,flag2=false;
        for(i=0;i<n;i++)
        {
            cin>>str[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(str[i][j]=='1')
                {
                    flag=true;
                    if(str[i+1][j]!='1' && str[i][j+1]!='1')
                    {
                        flag2=true;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(flag2==true)
            {
                break;
            }
        }
        if(flag==false && flag2==false)
        {
            cout<<"YES"<<endl;
        }
        else if(flag2==false)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
