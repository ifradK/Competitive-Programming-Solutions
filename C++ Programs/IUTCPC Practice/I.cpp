#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,k,i;
    string str1,str2;
    cin>>t;
    while(t--)
    {
        vector<char> v;
        long long q=0;
        cin>>str1;
        cin>>k;
        cin>>str2;
        sort(str2.begin(),str2.end());
        for(i=0;i<str1.size();i++)
        {
            if(str1[i]=='?')
            {
                q++;
            }
        }
        long long temp=k-q, j=0,k;
        bool flag=false;

        for(i=0;i<str1.size();i++)
        {
            if(str1[i]!='?')
            {
                v.push_back(str1[i]);
            }
            else if(str1[i]=='?')
            {
                while(str1[i]=='?')
                {
                    v.push_back(str2[j]);
                    j++;
                    i++;
                }
                while(str1[i]>=str2[j])
                {
                    if(temp==0)
                    {
                        flag=true;
                        i--;
                        break;
                    }
                    v.push_back(str2[j]);
                    j++;
                    temp--;
                }
                if(flag==false)
                {
                    i--;
                }
            }
        }
        for(k=j;k<str2.size();k++)
        {
            v.push_back(str2[k]);
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
