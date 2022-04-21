#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    priority_queue<long> q;
    long long n,k,value,cnt=0,a,b;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        q.push(-value);
    }
    while(1)
    {
        a=q.top();
        if(-a>=k)
        {
            cout<<cnt;
            break;
        }
        q.pop();
        if(q.empty())
        {
            cout<<-1;
            break;
        }
        b=q.top();
        q.pop();
        q.push(a*1+b*2);
        cnt++;
    }
    return 0;
}
