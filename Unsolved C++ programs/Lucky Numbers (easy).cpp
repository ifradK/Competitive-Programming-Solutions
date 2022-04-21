#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,four,seven,temp=100;
    bool flag=false;
    string num,val;
    cin>>n;
    num=to_string(n);
    if(num.size()%2==0)
    {
        four=num.size()/2;
        seven=num.size()/2;
        for(i=0; i<seven; i++)
        {
            val=val+'7';
        }
        for(i=0; i<four; i++)
        {
            val=val+'4';
        }
        if(val<num)
        {
            four++;
            seven++;
            for(i=0; i<four; i++)
            {
                cout<<4;
            }
            for(i=0; i<seven; i++)
            {
                cout<<7;
            }
        }
        else
        {
            for(i=0; i<num.size(); i++)
            {
                if(num[i]>'7')
                {
                    temp=i;
                    break;
                }
            }
            for(i=0; i<num.size(); i++)
            {
                if(i==temp-1 && flag==false)
                {
                    cout<<7;
                    seven--;
                    flag=true;
                }
                else if(flag==true && four>0)
                {
                    cout<<4;
                    four--;
                }
                else if(four>0 && num[i]=='4')
                {
                    cout<<4;
                    four--;
                }
                else if(four>0 && num[i]<'4')
                {
                    cout<<4;
                    four--;
                    flag=true;
                }
                else if(seven>0)
                {
                    cout<<7;
                    seven--;
                }
            }
        }
    }
    else
    {
        four=(num.size()/2)+1;
        seven=(num.size()/2)+1;
        for(i=0; i<four; i++)
        {
            cout<<4;
        }
        for(i=0; i<seven; i++)
        {
            cout<<7;
        }
    }
    return 0;
}

//3696
