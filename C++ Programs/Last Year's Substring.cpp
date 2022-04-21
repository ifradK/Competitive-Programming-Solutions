#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j,k;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        string b="2020";
        j=0;
        for(i=0;i<4;i++)
        {
            if(j==4)
            {
                break;
            }
            if(a[i]==b[i])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        for(i=n-1,k=3;i>=0,k>=0;i--,k--)
        {
            if(j==4)
            {
                break;
            }
            if(a[i]==b[k])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        if(j==4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
