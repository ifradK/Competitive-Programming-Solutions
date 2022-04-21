#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long q,n,x,y,f1,f2,f3,f4,x_ans,y_ans;
    cin>>q;
    while(q--)
    {
        long long x_left=INT_MIN,x_right=INT_MAX,y_up=INT_MAX,y_down=INT_MIN;
        cin>>n;
        while(n--)
        {
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(f1==1 && f2==1 && f3==1 && f4==1)
            {
                continue;
            }
            if(f1==0)
            {
                if(x>x_left)
                {
                    x_left=x;
                }
            }
            if(f2==0)
            {
                if(y<y_up)
                {
                    y_up=y;
                }
            }
            if(f3==0)
            {
                if(x<x_right)
                {
                    x_right=x;
                }
            }
            if(f4==0)
            {
                if(y>y_down)
                {
                    y_down=y;
                }
            }
        }
        if(x_left>x_right || y_down>y_up)
        {
            cout<<0<<endl;
            continue;
        }

        if(x_left==INT_MIN)
        {
            x_ans=-100000;
        }
        else if(x_right==INT_MAX)
        {
            x_ans=100000;
        }
        else
        {
            x_ans=(x_left+x_right)/2;
        }

        if(y_down==INT_MIN)
        {
            y_ans=-100000;
        }
        else if(y_up==INT_MAX)
        {
            y_ans=100000;
        }
        else
        {
            y_ans=(y_up+y_down)/2;
        }

        cout<<1<<" "<<x_ans<<" "<<y_ans<<endl;;
    }
    return 0;
}
