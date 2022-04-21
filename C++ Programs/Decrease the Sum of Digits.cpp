#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,s,i;
    string str;
    cin>>t;
    while(t--)
    {
        long long cnt=0,num=1,num2,sum=0,tot_sum=0;
        cin>>n>>s;
        str=to_string(n);
        for(i=0; i<str.size(); i++)
        {
            tot_sum=tot_sum+(str[i]-'0');
        }
        if(tot_sum<=s)
        {
            cout<<0<<endl;
            continue;
        }
        for(i=0; i<str.size(); i++)
        {
            cnt++;
            sum=sum+(str[i]-'0');
            if(sum>=s)
            {
                cnt--;
                break;
            }
        }
        num2=str[cnt]-'0';
        long long sz=str.size();
        for(i=cnt; i<=sz-2; i++)
        {
            num2=(num2*10)+(str[i+1]-'0');
        }
        if(n==s)
        {
            num=num2;
        }
        else
        {
            for(i=1; i<=sz-cnt; i++)
            {
                num=num*10;
            }
        }
        cout<<num-num2<<endl;
    }
    return 0;
}
