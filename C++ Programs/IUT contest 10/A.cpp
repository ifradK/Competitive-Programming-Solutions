#include<iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long nCr(long long n, long long r)
{
    long long p=1,k=1;
    if (n-r<r)
       {
           r=n-r;
       }
    if (r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m =__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }
    return p;
}

int main()
{
    fastio;
    long long t,i,cs=0;
    string str;
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>str;
        int flag[3],j=0,power_int;
        string name1,name2,power_str;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='+')
            {
                flag[j]=i;
                j++;
            }
            if(str[i]==')')
            {
                flag[j]=i;
                j++;
            }
            if(str[i]=='^')
            {
                flag[j]=i;
                j++;
            }
        }
        //cout<<flag[0]<<" "<<flag[1];
        name1=str.substr(1,flag[0]-1);
        name2=str.substr(flag[0]+1,flag[1]-flag[0]-1);
        power_str=str.substr(flag[2]+1);
        power_int=stoi(power_str);
        //cout<<name1<<" "<<name2<<" "<<power_int;
        cout<<"Case "<<cs<<": ";
        for(i=0;i<=power_int;i++)
        {
            long pow=nCr(power_int,i);
            if(pow==1)
            {
                if(i==0)
                {
                    if(power_int-i==1)
                    {
                        cout<<name1;
                    }
                    else
                    {
                        cout<<name1<<"^"<<power_int-i;
                    }
                }
                else if(power_int-i==0)
                {
                    if(i==1)
                    {
                        cout<<name2;
                    }
                    else
                    {
                        cout<<name2<<"^"<<i;
                    }
                }
                else if(i==1 && power_int-i==1)
                {
                    cout<<name1<<"*"<<name2;
                }
                else if(i==1 && power_int-i!=1)
                {
                    cout<<name1<<"^"<<power_int-i<<"*"<<name2;
                }
                else if(i!=1 && power_int-i==1)
                {
                    cout<<name1<<"*"<<name2<<"^"<<i;
                }
                else
                {
                    cout<<name1<<"^"<<power_int-i<<"*"<<name2<<"^"<<i;
                }
            }
            else
            {
                if(i==0)
                {
                    if(power_int-i==1)
                    {
                        cout<<nCr(power_int,i)<<"*"<<name1;
                    }
                    else
                    {
                        cout<<nCr(power_int,i)<<"*"<<name1<<"^"<<power_int-i;
                    }
                }
                else if(power_int-i==0)
                {
                    if(i==1)
                    {
                        cout<<nCr(power_int,i)<<"*"<<name2;
                    }
                    else
                    {
                        cout<<nCr(power_int,i)<<"*"<<name2<<"^"<<i;
                    }
                }
                else if(i==1 && power_int-i==1)
                {
                    cout<<nCr(power_int,i)<<"*"<<name1<<"*"<<name2;
                }
                else if(i==1 && power_int-i!=1)
                {
                    cout<<nCr(power_int,i)<<"*"<<name1<<"^"<<power_int-i<<"*"<<name2;
                }
                else if(i!=1 && power_int-i==1)
                {
                    cout<<nCr(power_int,i)<<"*"<<name1<<"*"<<name2<<"^"<<i;
                }
                else
                {
                    cout<<nCr(power_int,i)<<"*"<<name1<<"^"<<power_int-i<<"*"<<name2<<"^"<<i;
                }
            }
            //cout<<nCr(power_int,i)<<name1<<"^"<<power_int-i<<name2<<"^"<<i;



            if(i!=power_int)
            {
                cout<<"+";
            }
        }
        cout<<endl;
    }
}
/*
10
(a+b)^1
(a+b)^2
(a+b)^3
(a+b)^4
(a+b)^5
(a+b)^6
(a+b)^7
(a+b)^8
(a+b)^9
(a+b)^10
*/
