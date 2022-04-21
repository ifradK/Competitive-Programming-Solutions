#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i;
    cin>>t;
    while(t--)
    {
        string str;
        vector<char> v;
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            v.push_back(str[i]);
        }
        auto it1=v.begin();
        auto it2=it1;
        it2++;
        for( ; it2!=v.end(); )
        {
            bool flag=false;
            if(*it1=='a' && *it2=='a')
            {
                v.erase(it1);
            }
            else if(*it1=='b' && *it2=='b')
            {
                v.erase(it1);
            }
            else if(*it1=='a' && *it2=='b')
            {
                v.erase(it1);
            }
            else if(*it1=='b' && *it2=='a')
            {
                it1++;
                it2++;
                flag=true;
            }

            if(flag==false && it1!=v.begin())
            {
                it1--;
                it2--;
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        v.clear();
    }
}
