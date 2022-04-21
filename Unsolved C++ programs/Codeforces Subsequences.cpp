#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long k,a[10]={1,1,1,1,1,1,1,1,1,1},i,j,product=1;
    cin>>k;
    if(k==1)
    {
        cout<<"codeforces";
        return 0;
    }
    bool flag=false;
    while(1)
    {
        product=1;
        for(i=0; i<10; i++)
        {
            product=1;
            a[i]++;
            for(j=0;j<10;j++)
            {
                product=product*a[j];
            }
            if(product>=k)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<a[i];j++)
        {
            if(i==0){cout<<"c";}
            else if(i==1){cout<<"o";}
            else if(i==2){cout<<"d";}
            else if(i==3){cout<<"e";}
            else if(i==4){cout<<"f";}
            else if(i==5){cout<<"o";}
            else if(i==6){cout<<"r";}
            else if(i==7){cout<<"c";}
            else if(i==8){cout<<"e";}
            else if(i==9){cout<<"s";}
        }
    }
    return 0;
}
//421654016
