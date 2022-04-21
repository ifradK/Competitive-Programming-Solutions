#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,cs=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll a[26]={0};
        char x[110],y[110];

        scanf("\n");
		fgets(x, 104, stdin);
		scanf("\n");
		fgets(y, 104, stdin);

        for(i=0;i<strlen(x);i++)
        {
            if(x[i]>=65 && x[i]<=90)
            {
                x[i]=x[i]+32;
            }
        }
        for(i=0;i<strlen(y);i++)
        {
            if(y[i]>=65 && y[i]<=90)
            {
                y[i]=y[i]+32;
            }
        }
        for(i=0;i<strlen(x);i++)
        {
            if(x[i]!=' ')
            {
                a[x[i]-'a']++;
            }
        }
        for(i=0;i<strlen(y);i++)
        {
            if(y[i]!=' ')
            {
                a[y[i]-'a']--;
            }
        }
        bool flag=false;
        for(i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"Case "<<cs++<<": No"<<endl;
        }
        else
        {
            cout<<"Case "<<cs++<<": Yes"<<endl;
        }
    }
    return 0;
}
