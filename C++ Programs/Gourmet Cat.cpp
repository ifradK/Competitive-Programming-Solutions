#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long a,b,c,sum=0,temp_a,temp_b,temp_c,temp,a1,b1,c1;
    bool flag_a=false,flag_b=false,flag_c=false,flag=false,flag1=false,flag2=false,flag3=false;
    cin>>a>>b>>c;
    a1=a/3;
    b1=b/2;
    c1=c/2;
    if(a1==b1 && b1==c1)
    {
        sum=a1*7;
        temp_a=a%3;
        temp_b=b%2;
        temp_c=c%2;
        flag=true;
    }
    else if(a1<b1 && a1<c1)
    {
        sum=a1*7;
        temp=a%3;
        flag_a=true;
    }
    else if(b1<a1 && b1<c1)
    {
        sum=b1*7;
        temp=b%2;
        flag_b=true;
    }
    else if(c1<b1 && c1<a1)
    {
        sum=c1*7;
        temp=c%2;
        flag_c=true;
    }
    else if(a1==b1 && a1<c1)
    {
        sum=a1*7;
        temp_a=a%3;
        temp_b=b%2;
        flag1=true;
    }
    else if(a1==c1 && a1<b1)
    {
        sum=a1*7;
        temp_a=a%3;
        temp_c=c%2;
        flag2=true;
    }
    else if(b1==c1 && b1<a1)
    {
        sum=b1*7;
        temp_c=c%2;
        temp_b=b%2;
        flag3=true;
    }

    if(flag==true)
    {
        if(temp_a==2 && temp_b==0 && temp_c==0){sum=sum+2;}
        else if(temp_a==2 && temp_b==1 && temp_c==0){sum=sum+3;}
        else if(temp_a==2 && temp_b==0 && temp_c==1){sum=sum+2;}
        else if(temp_a==2 && temp_b==1 && temp_c==1){sum=sum+4;}
        else if(temp_a==1 && temp_b==0 && temp_c==0){sum=sum+1;}
        else if(temp_a==1 && temp_b==1 && temp_c==0){sum=sum+2;}
        else if(temp_a==1 && temp_b==0 && temp_c==1){sum=sum+2;}
        else if(temp_a==1 && temp_b==1 && temp_c==1){sum=sum+3;}
        else if(temp_a==0 && temp_b==0 && temp_c==0){sum=sum+0;}
        else if(temp_a==0 && temp_b==1 && temp_c==0){sum=sum+1;}
        else if(temp_a==0 && temp_b==0 && temp_c==1){sum=sum+1;}
        else if(temp_a==0 && temp_b==1 && temp_c==1){sum=sum+2;}
    }
    else if(flag_a==true)
    {
        if(temp==0)
        {
            sum=sum+2;
        }
        else if(temp==1)
        {
            sum=sum+5;
        }
        else if(temp==2)
        {
            sum=sum+6;
        }
    }
    else if(flag_b==true)
    {
        if(temp==0)
        {
            sum=sum+3;
        }
        else if(temp==1)
        {
            sum=sum+6;
        }
    }
    else if(flag_c==true)
    {
        if(temp==0)
        {
            sum=sum+4;
        }
        else if(temp==1)
        {
            sum=sum+6;
        }
    }
    else if(flag1==true)
    {
        if(temp_a==2 && temp_b==0){sum=sum+3;}
        else if(temp_a==2 && temp_b==1){sum=sum+6;}
        else if(temp_a==1 && temp_b==0){sum=sum+3;}
        else if(temp_a==1 && temp_b==1){sum=sum+4;}
        else if(temp_a==0 && temp_b==0){sum=sum+1;}
        else if(temp_a==0 && temp_b==1){sum=sum+2;}
    }
    else if(flag2==true)
    {
        if(temp_a==2 && temp_c==0){sum=sum+4;}
        else if(temp_a==2 && temp_c==1){sum=sum+5;}
        else if(temp_a==1 && temp_c==0){sum=sum+2;}
        else if(temp_a==1 && temp_c==1){sum=sum+3;}
        else if(temp_a==0 && temp_c==0){sum=sum+1;}
        else if(temp_a==0 && temp_c==1){sum=sum+2;}
    }
    else if(flag3==true)
    {
        if(temp_b==1 && temp_c==0){sum=sum+3;}
        else if(temp_b==1 && temp_c==1){sum=sum+5;}
        else if(temp_b==0 && temp_c==0){sum=sum+2;}
        else if(temp_b==0 && temp_c==1){sum=sum+2;}
    }

    cout<<sum;
    return 0;
}
