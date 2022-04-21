#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str;
        long long a[n];
        stack<long long> st0,st1;
        long long cnt=0,temp;
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                if(st1.empty())
                {
                    cnt++;
                    st0.push(cnt);
                    a[i]=cnt;
                }
                else
                {
                    temp=st1.top();
                    st1.pop();
                    st0.push(temp);
                    a[i]=temp;
                }
            }
            else
            {
                if(st0.empty())
                {
                    cnt++;
                    st1.push(cnt);
                    a[i]=cnt;
                }
                else
                {
                    temp=st0.top();
                    st0.pop();
                    st1.push(temp);
                    a[i]=temp;
                }
            }
        }
        cout<<cnt<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        while(st1.empty())
        {
            st1.pop();
        }
        while(st0.empty())
        {
            st0.pop();
        }
    }
    return 0;
}
