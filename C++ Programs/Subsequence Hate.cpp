#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,one,zero,i,mn,left,right,mn1,mn2;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        one=0;
        zero=0;
        for(i=0; i<str.size(); i++)
        {
            if(str[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(one==0 || zero==0)
        {
            cout<<0<<endl;
            continue;
        }

        mn=min(zero,one);

        if(str[0]=='1')
        {
            left=0;
            right=one-1;
        }
        else
        {
            left=1;
            right=one;
        }
        if(right==0 && left==0)
        {
            cout<<0<<endl;
            continue;
        }
        mn1=right+left;
        for(i=1;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                right--;
                mn1=min(mn1,left+right);
            }
            else
            {
                left++;
                mn1=min(mn1,left+right);
            }
        }
        if(str[0]=='0')
        {
            left=0;
            right=zero-1;
        }
        else
        {
            left=1;
            right=zero;
        }
        if(right==0 && left==0)
        {
            cout<<0<<endl;
            continue;
        }
        mn2=right+left;
        for(i=1;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                right--;
                mn2=min(mn2,left+right);
            }
            else
            {
                left++;
                mn2=min(mn2,left+right);
            }
        }
        cout<<min(mn,min(mn1,mn2))<<endl;
    }
    return 0;
}
