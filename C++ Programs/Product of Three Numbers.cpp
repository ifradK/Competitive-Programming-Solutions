#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

bool is_prime(long long n)
{
    if(n==1)
    {
        return false;
    }

    long long i=2;
    while (i*i<=n)
    {
        if (n%i==0)
        {
            return false;
        }
        i+=1;
    }
    return true;
}

main()
{
    fastio;
    long long t,n,a,b,c,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        if(is_prime(n)==true)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2==0)
        {
            n=n/2;
            a=2;
            if(n%2==0)
            {
                for(i=3; i<=sqrt(n); i++)
                {
                    if(n%i==0)
                    {
                        b=i;
                        c=n/i;
                        if(c!=b)
                        {
                            p=1;
                            cout<<"YES"<<endl;
                            cout<<a<<" "<<b<<" "<<c<<endl;
                            break;
                        }
                    }
                }
                if(p==0)
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                for(i=3; i<=sqrt(n); i++)
                {
                    if(n%i==0)
                    {
                        b=i;
                        c=n/i;
                        if(c!=b)
                        {
                            p=1;
                            cout<<"YES"<<endl;
                            cout<<a<<" "<<b<<" "<<c<<endl;
                            break;
                        }

                    }
                }
                if(p==0)
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            for(i=3; i<=sqrt(n); i=i+2)
            {
                if(n%i==0)
                {
                    a=i;
                    n=n/i;
                    break;
                }
            }
            for(i=a+2; i<=sqrt(n); i=i+2)
            {
                if(n%i==0)
                {
                    b=i;
                    c=n/i;
                    if(c!=b)
                    {
                        p=1;
                        cout<<"YES"<<endl;
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        break;
                    }
                }
            }
            if(p==0)
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
