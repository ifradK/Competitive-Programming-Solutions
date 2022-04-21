#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

string rev(string a, int n)
{
    string b=a;
    int i,j;
    for(i=0,j=n-1;i<n;i++,j--)
    {
        if(a[i]=='1')
        {
            a[i]='0';
        }
        else
        {
            a[i]='1';
        }
        b[j]=a[i];
    }
    return b;
}

int main()
{
    fastio;
    int t,n,i,j;
    int temp,temp2,cnt;
    vector<int> v;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a>>b;
        temp=n-1;
        temp2=n-1;
        cnt=n;
        while(cnt>0)
        {
            if(b[temp]==a[temp2])
            {
                cnt--;
                temp--;
                temp2--;
            }
            else
            {
                if(a[0]==b[temp])
                {
                    if(a[0]=='1'){a[0]='0';}
                    else{a[0]='1';}
                    v.push_back(1);
                    v.push_back(cnt);
                    a=rev(a,cnt);
                }
                else
                {
                    v.push_back(cnt);
                    a=rev(a,cnt);
                }
            }
        }
        cout<<v.size()<<" ";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
