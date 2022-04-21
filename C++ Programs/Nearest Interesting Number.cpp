#include<iostream>
#include<cstring>
#include<string>
int main()
{
    int n,i,j,len,sum=0;
    std::string str;
    std::cin>>n;
    while(1)
    {
        sum=0;
        len=0;
        str=std::to_string(n);
        len=str.size();
        for(i=0; i<len; i++)
        {
            sum=sum+str[i];
        }
        if(sum%4==0)
        {
            std::cout<<n;
            return 0;
        }
        else
        {
            n++;
        }
    }
    return 0;
}
