#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        ll temp=0,temp1=0;
        string s;
        cin>>n>>s>>k;
        char a[k];
        for(i=0;i<k;i++){cin>>a[i];}
        bool flag=false;
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<k;j++)
            {
                if(s[i]==a[j]){temp=i;flag=true;break;}
            }
            if(flag){break;}
        }
        flag=false;
        for(i=temp-1;i>=0;i--)
        {
            for(j=0;j<k;j++)
            {
                if(s[i]==a[j] && s[i]!=s[temp]){temp1=i;flag=true;break;}
            }
            if(flag){break;}
        }
        cout<<temp-temp1<<endl;
    }
    return 0;
}
/*
1
7
joobeel
2 o e
*/
