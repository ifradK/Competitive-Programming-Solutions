#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        bool flagB=false,flagR=false,flagRR=false,flagBB=false,flag=false;
        vector<ll> v;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                flagB=true;
            }
            else if(s[i]=='R')
            {
                flagR=true;
            }
            else if(s[i]=='W')
            {
                v.push_back(i);
            }
        }
        v.push_back(n);
        if(flagR==false && flagB==false)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(n<2)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if(v.size()>0)
                {
                    ll temp=-1,j;
                    for(i=0;i<v.size();i++)
                    {
                        flagRR=false,flagBB=false;
                        for(j=temp+1;j<v[i];j++)
                        {
                            if(s[j]=='R')
                            {
                                flagRR=true;
                            }
                            else if(s[j]=='B')
                            {
                                flagBB=true;
                            }
                        }
                        temp=v[i];
                        if(flagRR==true && flagBB==true)
                        {
                            flag=true;
                        }
                        else if(flagRR==true || flagBB==true)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag==true)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    if(flagB==true && flagR==true)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        v.clear();
    }
    return 0;
}






