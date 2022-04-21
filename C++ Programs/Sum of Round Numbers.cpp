#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,len;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        str=to_string(n);
        len=str.size();
        long long a[len],b[6],cnt=0;
        b[0]=1;
        b[1]=10;
        b[2]=100;
        b[3]=1000;
        b[4]=10000;
        b[5]=100000;
        for(i=0; i<len; i++)
        {
            a[i]=(str[i]-'0')*b[len-1-i];
            if(a[i]==0)
            {
                cnt++;
            }
        }
        cout<<len-cnt<<endl;
        for(i=0; i<len; i++)
        {
            if(a[i]!=0)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
