#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

long long odd_divisor(long long n)
{
    long long i,mn=LONG_MAX;
    bool flag=false;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
            {
                flag=true;
                mn=min(mn,i);
            }
            else if((n/i)%2==1)
            {
                flag=true;
                mn=min(mn,n/i);
            }
        }
    }
    if(flag==true)
    {
        return mn;
    }
    else
    {
        return -1;
    }
}

int main()
{
    fastio;
    long long t,n,i,temp,temp2,temp3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else if(n%2==1)
        {
            cout<<n<<" = "<<(n/2)<<" + "<<(n/2)+1<<endl;
        }
        else
        {
            temp=odd_divisor(n);

            if(temp==-1)
            {
                cout<<"IMPOSSIBLE"<<endl;
            }
            else
            {
                temp2=temp/2;
                temp3=(temp-1)/2;
                if(temp2-temp3<0)
                {
                    cout<<"IMPOSSIBLE"<<endl;
                }
                else if(temp2-temp3==0)
                {
                    cout<<n<<" = ";
                    for(i=1;i<=temp2+temp3;i++)
                    {
                        cout<<i;
                        if(i!=temp2+temp3)
                        {
                            cout<<" + ";
                        }
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<n<<" = ";
                    for(i=temp2-temp3;i<=temp2+temp3;i++)
                    {
                        cout<<i;
                        if(i!=temp2+temp3)
                        {
                            cout<<" + ";
                        }
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
