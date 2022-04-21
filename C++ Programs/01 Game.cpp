#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i;
    string a;
    cin>>t;
    while(t--)
    {
        long long cnt=0;
        cin>>a;
        vector<char> v;
        for(i=0;i<a.size();i++)
        {
            v.push_back(a[i]);
        }
        for(i=0;i<v.size()-1; )
        {
            if(v.size()==0)
            {
                break;
            }
            if((v[i]=='1' && v[i+1]=='0') || (v[i]=='0' && v[i+1]=='1'))
            {
                v.erase(v.begin()+i+1);
                v.erase(v.begin()+i);
                i--;
                cnt++;
                if(i<0)
                {
                    i++;
                }
            }
            else
            {
                i++;
            }

        }
        if(cnt%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
    return 0;
}
