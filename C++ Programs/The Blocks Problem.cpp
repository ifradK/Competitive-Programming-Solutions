#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

stack<long long> st[30],temp1;
long long pos1,pos2;

void check(long long a, long long b, long long n)
{
    stack<long long> temp;
    for(long long i=0; i<n; i++)
    {
        bool flag1=false, flag2=false;
        while(!st[i].empty())
        {
            if(st[i].top()==a)
            {
                flag1=true;
                pos1=i;
            }
            if(st[i].top()==b)
            {
                flag2=true;
                pos2=i;
            }
            temp.push(st[i].top());
            st[i].pop();
        }
        while(!temp.empty())
        {
            st[i].push(temp.top());
            temp.pop();
        }
        if(flag1==true && flag2==true)
        {
            return;
        }
    }
}

int main()
{
    fastio;
    long long n,i,a,b;
    cin>>n;
    string str,str1,str2,str3;
    for(i=0; i<n; i++)
    {
        st[i].push(i);
    }
    while(1)
    {
        cin>>str;
        if(str=="quit")
        {
            break;
        }
        cin>>str1>>str2>>str3;
        if(str[0]=='m' && str2[1]=='n')
        {
            a=stoi(str1);
            b=stoi(str3);
            check(a,b,n);
            if(pos1==pos2)
            {
                continue;
            }
            while(1)
            {
                if(st[pos1].top()==a)
                {
                    break;
                }
                st[st[pos1].top()].push(st[pos1].top());
                st[pos1].pop();
            }
            while(1)
            {
                if(st[pos2].top()==b)
                {
                    break;
                }
                st[st[pos2].top()].push(st[pos2].top());
                st[pos2].pop();
            }
            st[pos2].push(st[pos1].top());
            st[pos1].pop();
        }
        else if(str[0]=='m' && str2[1]=='v')
        {
            a=stoi(str1);
            b=stoi(str3);
            check(a,b,n);
            if(pos1==pos2)
            {
                continue;
            }
            while(1)
            {
                if(st[pos1].top()==a)
                {
                    break;
                }
                st[st[pos1].top()].push(st[pos1].top());
                st[pos1].pop();
            }
            st[pos2].push(st[pos1].top());
            st[pos1].pop();
        }
        else if(str[0]=='p' && str2[1]=='n')
        {
            a=stoi(str1);
            b=stoi(str3);
            check(a,b,n);
            if(pos1==pos2)
            {
                continue;
            }
            while(1)
            {
                if(st[pos2].top()==b)
                {
                    break;
                }
                st[st[pos2].top()].push(st[pos2].top());
                st[pos2].pop();
            }
            while(1)
            {
                if(st[pos1].top()==a)
                {
                    temp1.push(st[pos1].top());
                    st[pos1].pop();
                    break;
                }
                temp1.push(st[pos1].top());
                st[pos1].pop();
            }
            while(!temp1.empty())
            {
                st[pos2].push(temp1.top());
                temp1.pop();
            }
        }
        else if(str[0]=='p' && str2[1]=='v')
        {
            a=stoi(str1);
            b=stoi(str3);
            check(a,b,n);
            if(pos1==pos2)
            {
                continue;
            }
            while(1)
            {
                if(st[pos1].top()==a)
                {
                    temp1.push(st[pos1].top());
                    st[pos1].pop();
                    break;
                }
                temp1.push(st[pos1].top());
                st[pos1].pop();
            }
            while(!temp1.empty())
            {
                st[pos2].push(temp1.top());
                temp1.pop();
            }
        }
    }
    for(i=0;i<n;i++)
    {
        while(!st[i].empty())
        {
            temp1.push(st[i].top());
            st[i].pop();
        }
        cout<<i<<":";
        while(!temp1.empty())
        {
            cout<<" "<<temp1.top();
            temp1.pop();
        }
        cout<<endl;
    }
    return 0;
}
