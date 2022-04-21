#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,a,b,x,y,n,a1,b1,n1,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        a1=a;
        b1=b;
        n1=n;
        if(n<=b-y)
        {
            b=b-n;
        }
        else
        {
            n=n-(b-y);
            b=y;
            if(n<=a-x)
            {
                a=a-n;
            }
            else
            {
                a=x;
            }
        }
        ans1=a*b;


        if(n1<=a1-x)
        {
            a1=a1-n1;
        }
        else
        {
            n1=n1-(a1-x);
            a1=x;
            if(n1<=b1-y)
            {
                b1=b1-n1;
            }
            else
            {
                b1=y;
            }
        }
        ans2=a1*b1;

        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
