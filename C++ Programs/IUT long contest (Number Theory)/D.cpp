#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    unsigned long long t,n,i,cs=1,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        if(n%2==1)
        {
            cout<<"Case "<<cs++<<": "<<"Impossible"<<endl;
        }
        else
        {
            while(n>=1)
            {
                if(n%2==1)
                {
                    break;
                }
                n=n/2;
                cnt++;
            }
            cout<<"Case "<<cs++<<": "<<n<<" "<<pow(2,cnt)<<endl;
        }
    }
    return 0;
}
