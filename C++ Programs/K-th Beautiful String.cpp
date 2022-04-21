#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,flag,flag1,flag2,temp;
    long long a[100010]={0};
    a[0]=0;
    for(i=1;i<=100000;i++)
    {
        a[i]=a[i-1]+i;
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;i<=100000;i++)
        {
            if(a[i]>=k)
            {
                break;
            }
        }
        flag=n-i;
        flag1=k-a[i-1]-1;
        flag2=n-flag1;
        for(i=1;i<=n;i++)
        {
            if(i==flag || i==flag2)
            {
                cout<<"b";
            }
            else
            {
                cout<<"a";
            }
        }
        cout<<endl;
    }
    return 0;
}
