#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    string str;
    long long i;
    while(1)
    {
        map<char,int> mp;
        getline(cin,str);
        if(str.find('*')!=string::npos)
        {
            break;
        }
        string words[51];
        int flag[51],cnt=0;
        flag[0]=str.find(' ');
        if(flag[0]!=string::npos)
        {
            cnt++;
            for(int i=1; ; i++)
            {
                flag[i]=str.find(' ',flag[i-1]+1);
                if(flag[i]==string::npos)
                {
                    break;
                }
                cnt++;
            }
        }
        cnt++;
        //cout<<"CNT "<<cnt<<endl;
        words[0]=str.substr(0,flag[0]);
        cnt--;
        for(i=1; i<cnt; i++)
        {
            words[i]=str.substr(flag[i-1]+1,flag[i]-flag[i-1]-1);
        }
        words[cnt]=str.substr(flag[i-1]+1);
        for(i=0; i<cnt+1; i++)
        {
            if(words[i][0]>=97 && words[i][0]<=122)
            {
                words[i][0]=words[i][0]-32;
            }
            mp[words[i][0]]++;
            //cout<<words[i][0]<<endl;
        }
        if(mp[words[0][0]]==cnt+1)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
        mp.clear();
    }
    return 0;
}
