#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n0,n1,n2,i;
    cin>>t;
    while(t--)
    {
        vector<long long> v;
        cin>>n0>>n1>>n2;
        if(n0>0)
        {
            v.push_back(0);
            for(i=0; i<n0; i++)
            {
                v.push_back(0);
            }
        }
        if(n1>0)
        {
            if(n1%2==1)
            {
                if(v.size()>0)
                {
                    for(i=0; i<n1; i++)
                    {
                        if(i%2==0)
                        {
                            v.push_back(1);
                        }
                        else
                        {
                            v.push_back(0);
                        }
                    }
                }
                else
                {
                    v.push_back(0);
                    for(i=0; i<n1; i++)
                    {
                        if(i%2==0)
                        {
                            v.push_back(1);
                        }
                        else
                        {
                            v.push_back(0);
                        }
                    }
                }
            }
            else
            {
                if(v.size()>0)
                {
                    for(i=0;i<n1-1;i++)
                    {
                        if(i%2==0)
                        {
                            v.push_back(1);
                        }
                        else
                        {
                            v.push_back(0);
                        }
                    }
                    v.insert(v.begin(),1);
                }
                else
                {
                    v.push_back(1);
                    for(i=0; i<n1; i++)
                    {
                        if(i%2==0)
                        {
                            v.push_back(0);
                        }
                        else
                        {
                            v.push_back(1);
                        }
                    }
                }
            }
        }
        if(n2>0)
        {
            //if((n1>0 || n0>0) && v[v.size()-1]==0)
            if(n1==0 && n0==0)
            {
                v.push_back(1);
            }
            for(i=0;i<n2;i++)
            {
                v.push_back(1);
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
