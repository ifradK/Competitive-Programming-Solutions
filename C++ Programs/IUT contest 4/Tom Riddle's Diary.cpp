#include<iostream>
#include <bits/stdc++.h>
#include <cstring>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct person
{
    string dep;
    string title;
    string f_name;
    string l_name;
    string address;
    string h_tele;
    string o_tele;
    string mail_box;
};

bool comp(person p1, person p2)
{
    return (p1.l_name<p2.l_name);
}

int main()
{
    fastio;
    int n;
    person p;
    string details,dept_name;
    cin>>n;
    vector<person> v;
    cin.ignore();
    while(n--)
    {
        getline(cin,dept_name);
        while(1)
        {
            if(!getline(cin,details) || details.empty())
            {
                break;
            }
            int flag[6];
            flag[0]=details.find(',');
            for(int i=1;i<6;i++)
            {
                flag[i]=details.find(',',flag[i-1]+1);
            }
            p.dep=dept_name;
            p.title=details.substr(0,flag[0]);
            p.f_name=details.substr(flag[0]+1,flag[1]-flag[0]-1);
            p.l_name=details.substr(flag[1]+1,flag[2]-flag[1]-1);
            p.address=details.substr(flag[2]+1,flag[3]-flag[2]-1);
            p.h_tele=details.substr(flag[3]+1,flag[4]-flag[3]-1);
            p.o_tele=details.substr(flag[4]+1,flag[5]-flag[4]-1);
            p.mail_box=details.substr(flag[5]+1);

            v.push_back(p);
        }
    }
    sort(v.begin(),v.end(),comp);
    for(auto p : v)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<p.title<<" "<<p.f_name<<" "<<p.l_name<<endl;
        cout<<p.address<<endl;
        cout<<"Department: "<<p.dep<<endl;
        cout<<"Home Phone: "<<p.h_tele<<endl;
        cout<<"Work Phone: "<<p.o_tele<<endl;
        cout<<"Campus Box: "<<p.mail_box<<endl;
    }
    return 0;
}



