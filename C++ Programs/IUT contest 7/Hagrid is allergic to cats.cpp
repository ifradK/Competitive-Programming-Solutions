#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,m,i,cs=0;
    string str;
    cin>>t;
    while(t--)
    {
        cs++;
        long long cnt=0,sum=0;
        cin>>m;
        cin>>str;
        sum=sum+(str[0]-48);
        for(i=1;i<=m;i++)
        {
            if(i<=sum)
            {
                sum=sum+(str[i]-48);
            }
            else
            {
                cnt=cnt+(i-sum);
                sum=sum+(i-sum);
                sum=sum+(str[i]-48);
            }
        }
        cout<<"Case #"<<cs<<": "<<cnt<<endl;
    }
    return 0;
}
