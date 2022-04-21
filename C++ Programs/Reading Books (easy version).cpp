#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,k,t,a,b,i,k1,sum=0,pos=0,pos1=0;
    cin>>n>>k;
    vector<long long> one_one,one_zero,zero_one;
    for(i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        if(a==1 && b==0){one_zero.push_back(t);}
        else if(a==0 && b==1){zero_one.push_back(t);}
        else if(a==1 && b==1){one_one.push_back(t);}
    }
    sort(one_zero.begin(),one_zero.end());
    sort(zero_one.begin(),zero_one.end());
    sort(one_one.begin(),one_one.end());

    if(one_one.size()+one_zero.size()<k || one_one.size()+zero_one.size()<k)
    {
        cout<<-1;
        return 0;
    }

    long long one_one_length=one_one.size(), one_zero_length=one_zero.size(), zero_one_length=zero_one.size();
    bool flag1=false,flag2=false;
    while(k!=0)
    {
        if(one_one_length==0)
        {
            flag1=true;
            break;
        }
        if(one_zero_length==0 || zero_one_length==0)
        {
            flag2=true;
            break;
        }


        if(one_one[pos]<=zero_one[pos1]+one_zero[pos1])
        {
            sum=sum+one_one[pos];
            one_one_length--;
            pos++;
            k--;
        }
        else
        {
            sum=sum+one_zero[pos1]+zero_one[pos1];
            one_zero_length--;
            zero_one_length--;
            pos1++;
            k--;
        }
    }

    if(flag1==true)
    {
        for(i=pos1; ;i++)
        {
            if(k==0)
            {
                break;
            }
            sum=sum+one_zero[i]+zero_one[i];
            k--;
        }
        cout<<sum;
    }
    else if(flag2==true)
    {
        for(i=pos; ;i++)
        {
            if(k==0)
            {
                break;
            }
            sum=sum+one_one[i];
            k--;
        }
        cout<<sum;
    }
    else
    {
        cout<<sum;
    }
    return 0;
}
