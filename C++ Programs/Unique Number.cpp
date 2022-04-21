#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,x,i,temp;
    cin>>t;
    while(t--)
    {
        vector<long long> v;
        cin>>x;
        if(x>45)
        {
            cout<<-1<<endl;
        }
        else
        {
            temp=9;
            while(1)
            {
                if(x<10)
                {
                    break;
                }
                x=x-temp;
                v.push_back(temp);
                temp--;
            }
            while(1)
            {
                if(x>temp)
                {
                    x=x-temp;
                    v.push_back(temp);
                    temp--;
                }
                else
                {
                    v.push_back(x);
                    break;
                }
            }
            for(i=v.size()-1;i>=0;i--)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
