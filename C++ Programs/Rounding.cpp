#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n,length;
    string str;
    cin>>n;
    if(n%10==0)
    {
        printf("%lld",n);
    }
    else if(n%10!=0 && n%5==0)
    {
        printf("%lld",n-5);
    }
    else
    {
        string str= to_string(n);
        length=str.size();
        if(str[length-1]=='1')
        {
            printf("%lld",n-1);
        }
        else if(str[length-1]=='2')
        {
            printf("%lld",n-2);
        }
        else if(str[length-1]=='3')
        {
            printf("%lld",n-3);
        }
        else if(str[length-1]=='4')
        {
            printf("%lld",n-4);
        }
        else if(str[length-1]=='6')
        {
            printf("%lld",n+4);
        }
        else if(str[length-1]=='7')
        {
            printf("%lld",n+3);
        }
        else if(str[length-1]=='8')
        {
            printf("%lld",n+2);
        }
        else if(str[length-1]=='9')
        {
            printf("%lld",n+1);
        }
    }
    return 0;
}
