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
        long long ans=0;
        if(str.size()==1)
        {
            cout<<0<<endl;
        }
        else if(str.size()==2)
        {
            if(str[0]==str[1])
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            for(i=1;i<str.size();i++)
            {
                if(str[i]==str[i-1] || (i-2>=0 && str[i]==str[i-2]))
                {
                    str[i]='#';
                }
            }
            for(i=0;i<str.size();i++)
            {
                if(str[i]=='#')
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
