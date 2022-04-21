#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i,cur,res;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        long long arr[str.size()]= {0};
        cur=0;
        res=0;
        for(i=0; i<str.size(); i++)
        {
            if(str[i]=='-')
            {
                cur--;
                arr[i]=cur;
            }
            else if(str[i]=='+')
            {
                cur++;
                arr[i]=cur;
            }

            if(arr[i]<0)
            {
                res=res+i+1;
                cur=0;
            }
        }
        res=res+str.size();
        cout<<res<<endl;
    }
    return 0;
}
