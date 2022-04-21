#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,k,n,i,j;
    string a;
    cin>>t;
    while(t--)
    {
        long long first_one=0,cnt=0,dist,temp;
        bool flag=false;
        cin>>n>>k;
        cin>>a;
        for(i=0; i<n; i++)
        {
            if(a[i]=='1')
            {
                flag=true;
                break;
            }
            first_one++;
        }
        if(flag==true)
        {
            for(i=first_one; i<n-1; )
            {
                dist=0;
                bool flag3=false;
                for(j=i+1; j<n; j++)
                {
                    if(a[j]=='1')
                    {
                        flag3=true;
                        temp=j;
                        break;
                    }
                    dist++;
                }
                if(flag3==true)
                {
                    if(dist!=0)
                    {
                        dist=dist-(2*k);
                        if(dist>=0)
                        {
                            cnt=cnt+ceil((float)dist/(k+1));
                        }
                    }
                    i=temp;
                }
                else
                {
                    cnt=cnt+floor((float)dist/(k+1));
                    break;
                }
            }
            for(i=first_one; i>0; )
            {
                dist=0;
                bool flag2=false;
                for(j=i-1; j>=0; j--)
                {
                    if(a[j]=='1')
                    {
                        flag2=true;
                        temp=j;
                        break;
                    }
                    dist++;
                }
                if(flag2==true)
                {
                    if(dist!=0)
                    {
                        dist=dist-(2*k);
                        if(dist>=0)
                        {
                            cnt=cnt+ceil((float)dist/(k+1));
                        }
                    }
                    i=temp;
                }
                else
                {
                    cnt=cnt+floor((float)dist/(k+1));
                    break;
                }
            }
        }
        else
        {
            for(i=0; i<n; i=i+k+1)
            {
                if(a[i]=='0')
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

