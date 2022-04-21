#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        while(1)
        {
            if(n<6)
            {
                if(n==1)
                {
                    cout<<cnt<<endl;
                }
                else if(n==3)
                {
                    cout<<cnt+2<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
                break;
            }
            if(n%6==0)
            {
                n=n/6;
            }
            else
            {
                n=n*2;
            }
            cnt++;
        }
    }
    return 0;
}
