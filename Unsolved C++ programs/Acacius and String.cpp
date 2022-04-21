#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,cnt;
    string a;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        cin>>a;

        for(i=0;i<=n-6;i++)
        {
            if(a[i]=='a' && a[i+1]=='b' && a[i+2]=='a' && a[i+3]=='c' && a[i+4]=='a' && a[i+5]=='b' && a[i+6]=='a')
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(a[i]=='?')
                {
                    cout<<"z";
                }
                else
                {
                    cout<<a[i];
                }
            }
            cout<<endl;
            continue;
        }

        string b=a;
        cnt=0;

        for(i=n-6;i>=0;i--)
        {
            if((a[i]=='a' || a[i]=='?') && (a[i+1]=='b' || a[i+1]=='?') && (a[i+2]=='a' || a[i+2]=='?') && (a[i+3]=='c' || a[i+3]=='?') &&
               (a[i+4]=='a' || a[i+4]=='?') && (a[i+5]=='b' || a[i+5]=='?') && (a[i+6]=='a' || a[i+6]=='?'))
            {
                if(a[i]=='?'){a[i]='a';}
                if(a[i+1]=='?'){a[i+1]='b';}
                if(a[i+2]=='?'){a[i+2]='a';}
                if(a[i+3]=='?'){a[i+3]='c';}
                if(a[i+4]=='?'){a[i+4]='a';}
                if(a[i+5]=='?'){a[i+5]='b';}
                if(a[i+6]=='?'){a[i+6]='a';}
                break;
            }
        }
        for(i=0;i<=n-6;i++)
        {
            if(a[i]=='a' && a[i+1]=='b' && a[i+2]=='a' && a[i+3]=='c' && a[i+4]=='a' && a[i+5]=='b' && a[i+6]=='a')
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(a[i]=='?')
                {
                    cout<<"z";
                }
                else
                {
                    cout<<a[i];
                }
            }
            cout<<endl;
            continue;
        }


        cnt=0;
        for(i=0;i<=n-6;i++)
        {
            if((b[i]=='a' || b[i]=='?') && (b[i+1]=='b' || b[i+1]=='?') && (b[i+2]=='a' || b[i+2]=='?') && (b[i+3]=='c' || b[i+3]=='?') && (b[i+4]=='a' || b[i+4]=='?') && (b[i+5]=='b' || b[i+5]=='?') && (b[i+6]=='a' || b[i+6]=='?'))
            {
                if(b[i]=='?'){b[i]='a';}
                if(b[i+1]=='?'){b[i+1]='b';}
                if(b[i+2]=='?'){b[i+2]='a';}
                if(b[i+3]=='?'){b[i+3]='c';}
                if(b[i+4]=='?'){b[i+4]='a';}
                if(b[i+5]=='?'){b[i+5]='b';}
                if(b[i+6]=='?'){b[i+6]='a';}
                break;
            }
        }
        for(i=0;i<=n-6;i++)
        {
            if(b[i]=='a' && b[i+1]=='b' && b[i+2]=='a' && b[i+3]=='c' && b[i+4]=='a' && b[i+5]=='b' && b[i+6]=='a')
            {
                cnt++;
            }
        }
        if(cnt>1 || cnt<1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(b[i]=='?')
                {
                    cout<<"z";
                }
                else
                {
                    cout<<b[i];
                }
            }
            cout<<endl;
            continue;
        }
    }
    return 0;
}
