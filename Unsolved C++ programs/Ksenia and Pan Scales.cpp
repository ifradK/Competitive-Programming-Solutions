#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


//Tried this for 24 hours but something wrong with the variables
//++ is not increasing the values by 1 rather by some garbage value
//Custom test in codeforce showing runtime error


main()
{
    fastio;
    string a,b;
    cin>>a>>b;
    long a_size=a.size();
    int cnt=0;
    int i=0,left=0,right=0;
    while(1)
    {
        if(a[i]=='|')
        {
            i++;
            break;
        }
        left++;
        i++;
    }
    for(i=i; i<a.size(); i++)
    {
        right++;
    }
    //cout<<left<<" "<<right<<endl;
    while(1)
    {
        cout<<left<<" "<<right<<endl;
        if(cnt==b.size())
        {
            //cout<<"HERE1"<<endl;
            break;
        }
        if(left<=right)
        {
            cout<<"HERE1"<<endl;
            left++;
            for(i=a_size; i>=0; i--)
            {
                //cout<<"HERE3 "<<i<<endl;
                if(i==0)
                {
                    a[i]=b[cnt];
                    //cout<<"HEREQ "<<cnt<<" "<<b[cnt]<<endl;
                    cnt++;
                }
                else
                {
                    a[i]=a[i-1];
                    cout<<"HEREW "<<i<<" "<<a[i]<<" "<<a[i-1]<<endl;
                }
                //cout<<a[i]<<" "<<a[i-1]<<endl;
            }
            a_size++;
            for(i=0;i<a_size;i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<"HERE5"<<endl;
            right++;
            a[a_size]=b[cnt];
            a_size++;
            cnt++;
        }
    }
    cout<<left<<" "<<right<<endl;
    if(left!=right)
    {
        cout<<"Impossible";
        return 0;
    }
    else
    {
        for(i=0; i<a_size; i++)
        {
            cout<<a[i];
        }
    }
    return 0;
}

