#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    float num;
    long long i,j,a[30010],c[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    memset(a,0,sizeof(a));
    a[0]=1;
    for(i=0;i<11;i++)
    {
        for(j=c[i];j<30005;j++)
        {
            a[j]=a[j]+a[j-c[i]];
        }
    }
    while(1)
    {
        cin>>num;
        if(num==0.00)
        {
            break;
        }
        i=(num+.001)*100;
        printf("%6.2f%17lld\n",num,a[i]);
    }
    return 0;
}
