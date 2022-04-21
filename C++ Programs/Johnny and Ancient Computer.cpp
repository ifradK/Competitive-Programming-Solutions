#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,cnt;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cnt=0;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(a<b)
        {
            while(1)
            {
                if(a==b)
                {
                    cout<<cnt<<endl;
                    break;
                }
                if(a>b)
                {
                    cout<<-1<<endl;
                    break;
                }

                if(a*8<=b)
                {
                    a=a*8;
                }
                else if(a*4<=b)
                {
                    a=a*4;
                }
                else
                {
                    a=a*2;
                }
                cnt++;
            }
        }
        else
        {
            while(1)
            {
                if(a==b)
                {
                    cout<<cnt<<endl;
                    break;
                }
                if(a<b)
                {
                    cout<<-1<<endl;
                    break;
                }

                if(a%8==0 && a/8>=b)
                {
                    a=a/8;
                }
                else if(a%4==0 && a/4>=b)
                {
                    a=a/4;
                }
                else if(a%2==0 && a/2<=b)
                {
                    a=a/2;
                }
                else
                {
                    cout<<-1<<endl;
                    break;
                }
                cnt++;
            }
        }
    }
    return 0;
}
