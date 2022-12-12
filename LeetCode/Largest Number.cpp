#include<iostream>
//#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

string s[105];

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans="";
        bool flag=false;
        for(int i=0;i<nums.size();i++){s[i]=to_string(nums[i]); if(nums[i]!=0){flag=true;}}
        if(!flag){return "0";}
        stringSort(nums.size());
        for(int i=0;i<nums.size();i++){ans=ans+s[i];}
//        for(int i=0;i<nums.size();i++)
//        {
//            cout<<s[i]<<endl;
//        }
        return ans;
    }

    void stringSort(int n)
    {
        for(int i=0;i<n;i++)
        {
            int temp=i;
            string temp1=s[i];
            for(int j=i+1;j<n;j++)
            {
                if(temp1.size()==s[j].size())
                {
                    if(temp1<s[j]){temp=j; temp1=s[j];}
                }
                else if(temp1.size()>s[j].size())
                {
                    bool flag=false;
                    for(int k=0;k<s[j].size();k++)
                    {
                        if(temp1[k]<s[j][k])
                        {
                            temp=j;
                            temp1=s[j];
                            flag=true;
                            break;
                        }
                        else if(temp1[k]>s[j][k]){flag=true; break;}
                    }
                    if(!flag)
                    {
                        string temp2=temp1+s[j];
                        string temp3=s[j]+temp1;
                        if(temp2<temp3){temp=j; temp1=s[j];}
                    }
                }
                else if(temp1.size()<s[j].size())
                {
                    bool flag=false;
                    for(int k=0;k<temp1.size();k++)
                    {
                        if(temp1[k]<s[j][k])
                        {
                            temp=j;
                            temp1=s[j];
                            flag=true;
                            break;
                        }
                        else if(temp1[k]>s[j][k]){flag=true; break;}
                    }
                    if(!flag)
                    {
                        string temp2=temp1+s[j];
                        string temp3=s[j]+temp1;
                        if(temp2<temp3){temp=j; temp1=s[j];}
                    }
                }
            }
            swap(s[i],s[temp]);
        }
    }
};

int main()
{
    int n,m;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }

    Solution s;
    cout<<s.largestNumber(v);
}


/*
6
30
95786234
957862
34
5
9

2
432
43243

10
1
2
4
8
16
32
64
128
256
512

2
64 256
*/




