#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,val,val2,i;
    set<long long> s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>val;
            val2=val;
            auto it=s1.find(val);
            if(it==s1.end())
            {
                s1.insert(val);
            }
            else
            {
                s2.insert(val);
                break;
            }
        }
        std::set<long long>::reverse_iterator rit1;
        rit1=s1.rbegin();
        if(*rit1!=s1.size())
        {
            cout<<0<<endl;
            continue;
        }
        for(i=i+1;i<n;i++)
        {
            cin>>val;
            auto it=s2.find(val);
            if(it==s2.end())
            {
                s2.insert(val);
            }
            else
            {
                break;
            }
        }
        std::set<long long>::reverse_iterator rit2;
        rit2=s2.rbegin();
        if(*rit2!=s2.size())
        {
            cout<<0<<endl;
            continue;
        }
        cout<<s1.size()<<" "<<s2.size()<<endl;
        s1.clear();
        s2.clear();
    }
    return 0;
}
