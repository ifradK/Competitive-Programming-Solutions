#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        long long first=0,third=0,cnt=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='[')
            {
                third++;
            }
            else if(str[i]=='(')
            {
                first++;
            }
            else if(str[i]==']')
            {
                if(third>0)
                {
                    third--;
                    cnt++;
                }
            }
            else if(str[i]==')')
            {
                if(first>0)
                {
                    first--;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
