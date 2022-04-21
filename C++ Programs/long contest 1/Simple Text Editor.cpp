#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long q,op,k;
    cin>>q;
    string str;
    stack<string> s;
    while(q--)
    {
        cin>>op;
        if(op==1)
        {
            string a;
            cin>>a;
            s.push(str);
            str=str+a;
        }
        else if(op==2)
        {
            cin>>k;
            s.push(str);
            str.erase(str.size()-k);
        }
        else if(op==3)
        {
            cin>>k;
            cout<<str[k-1]<<endl;
        }
        else if(op==4)
        {
            str=s.top();
            s.pop();
        }
    }
    return 0;
}
