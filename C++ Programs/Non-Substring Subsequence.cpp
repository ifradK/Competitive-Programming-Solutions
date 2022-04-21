#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,q,l,r,i,j;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n>>q>>str;
        long long first_one,last_one,first_zero,last_zero;
        while(q--)
        {
            cin>>l>>r;
            bool flag1=false,flag2=false,flag3=false,flag4=false;
            for(i=0;i<n;i++)
            {
                if(str[i]=='1' && flag1==false)
                {
                    first_one=i+1;
                    flag1=true;
                }
                else if(str[i]=='0' && flag2==false)
                {
                    first_zero=i+1;
                    flag2=true;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(str[i]=='1' && flag3==false)
                {
                    last_one=i+1;
                    flag3=true;
                }
                else if(str[i]=='0' && flag4==false)
                {
                    last_zero=i+1;
                    flag4=true;
                }
            }
            if(str[l-1]=='1' && l!=first_one)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(str[l-1]=='0' && l!=first_zero)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(str[r-1]=='1' && r!=last_one)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(str[r-1]=='0' && r!=last_zero)
            {
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
