#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long mod;
string quotient, s;

void modBigNumber(string num, long long m)
{
    vector<long long> vec;
    mod = 0;
    for(long long i=0; i<num.size(); i++)
    {
        long long digit = num[i]-'0';
        mod = mod * 10 + digit;
        long long quo = mod / m;
        vec.push_back(quo);
        mod = mod % m;
    }

    bool flag=0;
    for(int i=0; i<vec.size(); i++)
    {
        if (vec[i] == 0 && flag == 0)
        {
            continue;
        }
        flag = 1;
        quotient=quotient+to_string(vec[i]);
    }
    return;
}


string multiply(string num1, string num2)
{
    long long len1=num1.size(),len2=num2.size();
    if (len1==0 || len2==0)
    {
        return "0";
    }

    vector<long long> result(len1+len2,0);

    long long x=0,y=0;

    for(long long i=len1-1; i>=0; i--)
    {
        long long carry = 0;
        long long n1 = num1[i] - '0';
        y=0;

        for(long long j=len2-1; j>=0; j--)
        {
            long long n2=num2[j]-'0';
            long long sum= n1*n2+result[x+y]+carry;
            carry=sum/10;
            result[x+y]= sum%10;
            y++;
        }

        if(carry>0)
        {
            result[x + y]= result[x + y]+carry;
        }
        x++;
    }


    long long i= result.size()-1;
    while (i>=0 && result[i]==0)
    {
        i--;
    }

    s= "";
    if(i==-1)
    {
        s="0";
        return s;
    }
    while(i>=0)
    {
        s += std::to_string(result[i--]);
    }

    return s;
}


string findSum(string str1, string str2)
{
    if(str1.length()>str2.length())
    {
        swap(str1, str2);
    }

    string str= "";
    long long n1=str1.length(), n2=str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    long long carry=0;
    for(long long i=0; i<n1; i++)
    {
        long long sum=((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for (long long i=n1; i<n2; i++)
    {
        long long sum=((str2[i]-'0')+carry);
        str.push_back(sum%10 +'0');
        carry=sum/10;
    }

    if(carry)
    {
        str.push_back(carry+'0');
    }
    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    fastio;
    long long t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        quotient="";
        modBigNumber(n,7);
        //cout<<quotient<<" "<<mod<<" ";
        if(quotient!="")
        {
            multiply(quotient,to_string(9));
        }
        else
        {
            multiply("0",to_string(9));
        }
        //cout<<s<<endl;
        if(mod==0)
        {
            cout<<findSum(s,to_string(0));
        }
        else if(mod==1)
        {
            cout<<findSum(s,to_string(1));
        }
        else if(mod==2)
        {
            cout<<findSum(s,to_string(2));
        }
        else if(mod==3)
        {
            cout<<findSum(s,to_string(3));
        }
        else if(mod==4)
        {
            cout<<findSum(s,to_string(5));
        }
        else if(mod==5)
        {
            cout<<findSum(s,to_string(7));
        }
        else if(mod==6)
        {
            cout<<findSum(s,to_string(8));
        }
        cout<<endl;
        // cout<<findSum(s,to_string(mod))<<" "<<quotient<<" "<<mod<<endl;
    }
    return 0;
}
