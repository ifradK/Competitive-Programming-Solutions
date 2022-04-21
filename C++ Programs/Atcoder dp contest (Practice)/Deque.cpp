#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,j,a,taro=0,jiro=0;
    cin>>n;
    vector<long long> v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==1)
    {
        cout<<v[0];
    }
    else if(n==2)
    {
        cout<<max(v[0],v[1])-min(v[0],v[1]);
    }
    else if(n%2==0)
    {
        for(i=0; i<n; i++)
        {
            if(v.size()==2)
            {
                taro=taro+max(v[0],v[1]);
                jiro=jiro+min(v[0],v[1]);
                break;
            }
            else if(i%2==0)
            {
                if(v[0]+v[v.size()-2]>v[1]+v[v.size()-1])
                {
                    taro=taro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    taro=taro+v[v.size()-1];
                    v.pop_back();
                }
            }
            else
            {
                if(v[0]+v[v.size()-2]>v[1]+v[v.size()-1])
                {
                    jiro=jiro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    jiro=jiro+v[v.size()-1];
                    v.pop_back();
                }
            }
        }
        cout<<taro-jiro;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(v.size()==3)
            {
                if(v[0]>v[v.size()-1])
                {
                    taro=taro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    taro=taro+v[v.size()-1];
                    v.pop_back();
                }

                if(v[0]>v[v.size()-1])
                {
                    jiro=jiro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    jiro=jiro+v[v.size()-1];
                    v.pop_back();
                }

                taro=taro+v[0];

                break;
            }
            else if(i%2==0)
            {
                if(v[0]+v[v.size()-2]>v[1]+v[v.size()-1])
                {
                    taro=taro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    taro=taro+v[v.size()-1];
                    v.pop_back();
                }
            }
            else
            {
                if(v[0]+v[v.size()-2]>v[1]+v[v.size()-1])
                {
                    jiro=jiro+v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    jiro=jiro+v[v.size()-1];
                    v.pop_back();
                }
            }
        }
        cout<<taro-jiro;
    }
    return 0;
}
