#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,type,x;
    cin>>n;
    stack<long long> s1,s2;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>x;
            if(s1.empty()==1 && s2.empty()==1)
            {
                s1.push(x);
                s2.push(x);
            }
            else
            {
                if(s2.top()<=x)
                {
                    s2.push(x);
                    s1.push(x);
                }
                else
                {
                    s1.push(x);
                }
            }
        }
        else if(type==2)
        {
            if(s1.top()==s2.top())
            {
                s1.pop();
                s2.pop();
            }
            else
            {
                s1.pop();
            }
        }
        else if(type==3)
        {
            cout<<s2.top()<<endl;
        }
    }
    return 0;
}

