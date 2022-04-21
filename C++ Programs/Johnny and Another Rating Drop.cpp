#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,temp,temp2,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp2=temp=n;
        ans=0;
        while(temp>0)
        {
            temp=temp/4;
            ans=ans+temp*4;
            if(temp2%4==1)
            {
                ans=ans+1;
            }
            else if(temp2%4==2)
            {
                ans=ans+3;
            }
            else if(temp2%4==3)
            {
                ans=ans+4;
            }

            ans=ans+temp*3;
            temp=temp/2;
            temp2=temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
