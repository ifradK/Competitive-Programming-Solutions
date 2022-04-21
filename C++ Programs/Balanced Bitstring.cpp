#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string a;
        long long one=0, zero=0, ques=0;
        bool flag=false;
        char ch;
        cin>>a;
        for(j=0; j<k; j++)
        {
            bool flag1=false;

            if(a[j]!='?')
            {
                for(i=j+k; i<n; i=i+k)
                {
                    if(a[i]!='?' && a[i]!=a[j])
                    {
                        flag=true;
                        break;
                    }
                    a[i]=a[j];
                }
            }
            else
            {
                for(i=j+k; i<n; i=i+k)
                {
                    if(a[i]!='?')
                    {
                        flag1=true;
                        ch=a[i];
                        break;
                    }
                }
                if(flag1==true)
                {
                    a[j]=ch;
                    for(i=j+k; i<n; i=i+k)
                    {
                        if(a[i]!='?' && a[i]!=ch)
                        {
                            flag=true;
                            break;
                        }
                        a[i]=ch;
                    }
                }
            }

            if(flag==true)
            {
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<k; i++)
            {
                if(a[i]=='1')
                {
                    one++;
                }
                else if(a[i]=='0')
                {
                    zero++;
                }
                else
                {
                    ques++;
                }
            }
            if(one>k/2 || zero>k/2)
            {
                cout<<"NO"<<endl;
            }
            else if(ques>0 && (((k/2)-one)+((k/2)-zero)==ques))
            {
                cout<<"YES"<<endl;
            }
            else if(ques==0 && one==k/2 && zero==k/2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

