#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long b=0,s=0,c=0,nb,ns,nc,pb,ps,pc,i,r,diff,cnt=0;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='B')
        {
            b++;
        }
        else if(str[i]=='S')
        {
            s++;
        }
        else if(str[i]=='C')
        {
            c++;
        }
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    pair<pair<long long, long long>, pair<long long, long long>> temp[3];

    if(b==0){temp[0].first.first=-1;cnt++;}
    else{temp[0].first.first=nb/b;}
    if(s==0){temp[1].first.first=-1;cnt++;}
    else{temp[1].first.first=ns/s;}
    if(c==0){temp[2].first.first=-1;cnt++;}
    else{temp[2].first.first=nc/c;}

    temp[0].first.second=b;
    temp[1].first.second=s;
    temp[2].first.second=c;

    temp[0].second.first=pb;
    temp[1].second.first=ps;
    temp[2].second.first=pc;

    if(b==0){temp[0].second.second=-1;}
    else{temp[0].second.second=nb%b;}
    if(s==0){temp[1].second.second=-1;}
    else{temp[1].second.second=ns%s;}
    if(c==0){temp[2].second.second=-1;}
    else{temp[2].second.second=nc%c;}

    sort(temp,temp+3);

    if(cnt==0)
    {
        r=r+(temp[0].second.second*temp[0].second.first);
        temp[0].second.second=0;
        diff=temp[1].first.first-temp[0].first.first;

        if(diff*temp[0].first.second*temp[0].second.first<r)
        {
            temp[0].first.first=temp[1].first.first;
            r=r-(diff*temp[0].first.second*temp[0].second.first);
        }
        else if(diff*temp[0].first.second*temp[0].second.first==r)
        {
            cout<<temp[1].first.first;
            return 0;
        }
        else
        {
            cout<<(r/(temp[0].first.second*temp[0].second.first))+temp[0].first.first;
            return 0;
        }

        r=r+(temp[1].second.second*temp[1].second.first);
        temp[1].second.second=0;
        diff=temp[2].first.first-temp[1].first.first;

        if((diff*temp[0].first.second*temp[0].second.first)+(diff*temp[1].first.second*temp[1].second.first)<r)
        {
            temp[0].first.first=temp[2].first.first;
            temp[1].first.first=temp[2].first.first;
            r=r-((diff*temp[0].first.second*temp[0].second.first)+(diff*temp[1].first.second*temp[1].second.first));
        }
        else if((diff*temp[0].first.second*temp[0].second.first)+(diff*temp[1].first.second*temp[1].second.first)==r)
        {
            cout<<temp[2].first.first;
            return 0;
        }
        else
        {
            cout<<(r/((temp[0].first.second*temp[0].second.first)+(temp[1].first.second*temp[1].second.first)))+temp[0].first.first;
            return 0;
        }

        r=r+(temp[2].second.second*temp[2].second.first);
        temp[2].second.second=0;
        cout<<temp[2].first.first+(r/((temp[0].first.second*temp[0].second.first)+(temp[1].first.second*temp[1].second.first)+(temp[2].first.second*temp[2].second.first)));
    }
    else if(cnt==1)
    {
        r=r+(temp[1].second.second*temp[1].second.first);
        temp[1].second.second=0;
        diff=temp[2].first.first-temp[1].first.first;

        if(diff*temp[1].first.second*temp[1].second.first<r)
        {
            temp[1].first.first=temp[2].first.first;
            r=r-(diff*temp[1].first.second*temp[1].second.first);
        }
        else if(diff*temp[1].first.second*temp[1].second.first==r)
        {
            cout<<temp[2].first.first;
            return 0;
        }
        else
        {
            cout<<(r/(temp[1].first.second*temp[1].second.first))+temp[1].first.first;
            return 0;
        }
        cout<<temp[2].first.first+(r/((temp[1].first.second*temp[1].second.first)+(temp[2].first.second*temp[2].second.first)));
    }
    else if(cnt==2)
    {
        r=r+(temp[2].second.second*temp[2].second.first);
        temp[2].second.second=0;
        cout<<temp[2].first.first+(r/(temp[2].second.first*temp[2].first.second));
    }

    return 0;
}
