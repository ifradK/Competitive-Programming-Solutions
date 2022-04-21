#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i;
    cin>>t;
    while(t--)
    {
        long long odd_even=0, odd_odd=0, even_odd=0, even_even=0, len, turn=1;
        cin>>len;
        string n;
        cin>>n;
        for(i=1;i<=len;i++)
        {
            if(i%2==1)
            {
                if((n[i-1]-'0')%2==0){odd_even++;}
                else{odd_odd++;}
            }
            else
            {
                if((n[i-1]-'0')%2==1){even_odd++;}
                else{even_even++;}
            }
        }
        while(len!=1)
        {
            if(turn%2==1)
            {
                if(odd_even>0){odd_even--;}
                else{odd_odd--;}
            }
            else
            {
                if(even_odd>0){even_odd--;}
                else{even_even--;}
            }
            turn++;
            len--;
        }
        if(odd_even>0 || even_even>0){cout<<2<<endl;}
        else{cout<<1<<endl;}
    }
    return 0;
}
