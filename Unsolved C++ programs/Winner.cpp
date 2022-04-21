/*
FUC**D UP EKDOM
3 DIN TRY KOIRAO HOILO NA
WORTHLESS AMI BUT ANEK TRY KORSILAM :(
*/


#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,val,mx=INT_MIN;
    string str;
    map<string,long long> m;
    map<long long,string> m1;
    vector<pair<long long,string>> v;
    vector<string> v1;
    cin>>n;
    while(n--)
    {
        int flag=0;
        cin>>str;
        cin>>val;
        m[str]=m[str]+val;
        long long j=0,index1;
        for(auto it1=v.begin(); it1!=v.end(); it1++)
        {
            if(v[j].second==str)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag!=1)
        {
            v1.push_back(str);
        }
        v.push_back(make_pair(m[str],str));
//        if(m[str]>=0)
//        {
//            v.push_back(make_pair(m[str],str));
//        }
//        else
//        {
//            for(auto it1=v.begin(); it1!=v.end(); it1++)
//            {
//                if(v[j].second==str)
//                {
//                    flag=1;
//                    index1=distance(v.begin(),it1);
//                    break;
//                }
//                j++;
//            }
//            if(flag==1)
//            {
//                v[index1]={m[str],str};
//            }
//            else
//            {
//                v.push_back(make_pair(m[str],str));
//            }
//        }


//        for(auto it1=v.begin();it1!=v.end();it1++)
//        {
//            if(v[j].second==str)
//            {
//                index1=distance(v.begin(),it1);
//                flag=1;
//                break;
//            }
//            j++;
//        }
//        if(flag==1)
//        {
//            v[index1]={m[str],str};
//        }
//        else
//        {
//            v.push_back(make_pair(m[str],str));
//        }


//        if(m[str]<0)
//        {
//            auto p=make_pair(m[str],str);
//            auto it=find(v.begin(),v.end(),p);
//            m[str]=INT_MIN;
//            long long index=distance(v.begin(),it);
//            v[index]= {m[str],str};
//        }
    }
    //sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    long long k,current;
    string ans;
    for(long long i=0;i<v1.size();i++)
    {
        for(k=0;k<v.size();k++)
        {
            if(v1[i]==v[k].second)
            {
                current=v[k].first;
                //cout<<"CURR "<<current<<endl;
                //break;
            }
        }
        if(mx<current)
        {
            mx=current;
            ans=v[k].second;
        }
    }
    cout<<ans;
//    for(long long i=0; i<sz; i++)
//    {
//        if(v[i].first>mx)
//        {
//            mx=v[i].first;
//            k=i;
//            //cout<<"MAX "<<mx<<endl;
//        }
//    }
//    cout<<v[k].second;
    //cout<<v[sz-1].second;
    return 0;
}

/*
6
m 5
m -100
a 3
 k 2
k 2
a 1
*/
