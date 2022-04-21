#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long x,y,n,i;
    cin>>x>>y>>n;
    for(i=1;i<=n;i++)
    {
        if(i%x==0 && i%y==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%x==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%y==0)
        {
            cout<<"Buzz"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return  0;
}
