#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[10005][10005];

//FIRST APPROACH (USING LCS)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j;
        for(i=0;i<=t.size();i++){dp[0][i]=0;}
        for(i=0;i<=s.size();i++){dp[i][0]=0;}

        for(i=1;i<=t.size();i++)
        {
            for(j=1;j<=s.size();j++)
            {
                if(t[i-1]==s[j-1]){dp[i][j]=1+dp[i-1][j-1];}
                else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
            }
        }

        if(dp[t.size()][s.size()]==s.size()){return true;}
        else{return false;}
    }
};


//ALTERNATE SOLUTION (BETTER APPROACH)
//class Solution {
//public:
//    bool isSubsequence(string s, string t) {
//        int i,j,temp=0,cnt=0;
//        for(i=0;i<s.size();i++)
//        {
//            for(j=temp;j<t.size();j++)
//            {
//                if(s[i]==t[j]){cnt++; temp=j+1; break;}
//            }
//        }
//        if(cnt==s.size()){return true;}
//        else{return false;}
//    }
//};


int main()
{
    string s,t;
    cin>>s>>t;
    Solution m;
    cout<<m.isSubsequence(s,t);
}
