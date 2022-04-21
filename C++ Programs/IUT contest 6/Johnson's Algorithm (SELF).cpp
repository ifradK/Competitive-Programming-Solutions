#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int binaryNum[100];
long long value[301];

void init()
{
    long long i;
    value[1]=1;
    for(i=2;i<=300;i++)
    {
        value[i]=(value[i-1]*2)+1;
    }
}


long long decToBinary(long long n)
{

    long long i=0;
    while(n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    return i;
}

long long binaryToDecimal(long long n)
{
    long long num=n;
    long long temp=num,base=1,dec_value=0;
    while(temp)
    {
        long long last_digit=temp%10;
        temp=temp/10;
        dec_value += last_digit*base;
        base=base*2;
    }
    return dec_value;
}

main()
{
    fastio;
    long long l,r,len1,len2,i,j,diff;
    cin>>l>>r;
    len1=decToBinary(l);
    int array1[len1];
    for (j=len1-1,i=0; j>=0; j--,i++)
    {
        array1[i]=binaryNum[j];
    }
    len2=decToBinary(r);
    int array2[len2];
    for (j=len2-1,i=0; j>= 0; j--,i++)
    {
        array2[i]=binaryNum[j];
    }
    init();
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(array1[i]!=array2[i])
            {
                break;
            }
        }
        diff=len1-i;
        cout<<value[diff];
    }
    else
    {
        cout<<value[len2];
    }
    return 0;
}

