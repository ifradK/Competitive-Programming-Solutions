#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,type,x;
    cin>>n;
    vector<long long> v;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>x;
            v.push_back(x);
        }
        else if(type==2)
        {
            if(!v.empty())
            {
                v.pop_back();
            }
        }
        else if(type==3)
        {
            cout<<*max_element(v.begin(),v.end())<<endl;
        }
    }
    return 0;
}
