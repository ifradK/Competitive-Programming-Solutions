#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n],one=0,zero=0;
        bool flag=false;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]==0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(zero>0 && one>0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}


