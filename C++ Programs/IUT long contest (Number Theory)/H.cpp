#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

bool isPrime(long long n)
{
    if(n==1){return false;}
    if(n <= 3){return true;}
    if(n%2==0 || n%3==0){return false;}
    for(long long i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}

int main()
{
    fastio;
    long long t,cs=1,i;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        long long a[130]={0};
        bool flag=false;
        memset(a,0,sizeof(a));
        for(i=0;i<str.size();i++)
        {
            a[(int)str[i]]++;
        }
        cout<<"Case "<<cs++<<": ";
        for(i=0;i<125;i++)
        {
            if(a[i]!=0)
            {
                if(isPrime(a[i])==true)
                {
                    flag=true;
                    cout<<(char)i;
                }
            }
        }
        if(flag==false)
        {
            cout<<"empty";
        }
        cout<<endl;
    }
    return 0;
}
