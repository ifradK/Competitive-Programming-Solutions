#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,j,s,a[3500]={0},sum,b[3500]={0},cs=1;
    memset(a,-1,sizeof(a));
    for(i=1;i<=1000;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        sum=sum+i;
        a[sum]=i;
    }
    while(1)
    {
        cin>>s;
        if(s==0)
        {
            break;
        }
        cout<<"Case "<<cs++<<": ";
        if(a[s]!=-1)
        {
            cout<<a[s]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
