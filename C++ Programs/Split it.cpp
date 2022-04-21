#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(n%2==1)
            {
                bool flag=false;
                for(ll i=(n/2)-1,j=(n/2)+1; i>=0; i--,j++)
                {
                    if(str[i]!=str[j])
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag==true)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    if(n/2>=k)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }

            }
            else
            {
                bool flag=false;
                for(ll i=(n/2)-1,j=n/2; i>=0; i--,j++)
                {
                    if(str[i]!=str[j])
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag==true)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    if((n/2)>=k+1)
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
    }
    return 0;
}
