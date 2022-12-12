#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[2000][2000];

class Solution {
public:
    string longestPalindrome(string s) {
        memset(dp,0,sizeof(dp));
        int i,j;
        for(i=0,j=0;i<s.size();i++,j++){dp[i][j]=1;}
        for(i=0; i<s.size(); i++){if(s[i]==s[i+1]){dp[i][i+1]=1;}}

        for(i=2;i<=s.size();i++)
        {
            for(j=0;j<s.size()-i;j++)
            {
                if(s[j]==s[j+i] && dp[j+1][j+i-1]==1){dp[j][j+i]=1;}
                else{dp[j][j+i]=0;}
            }
        }

        int start=0,End=0;
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<s.size();j++)
            {
                if(j>=i && dp[i][j]==1 && j-i>End-start)
                {
                    End=j;
                    start=i;
                }
            }
        }

        string ans=s.substr(start,End-start+1);
        return ans;
    }
};


int main()
{
    string s,s1;
    cin>>s;
    Solution m;
    cout<<m.longestPalindrome(s);
}

//aacabdkacaa



/* LONGEST PALINDROMIC SUBSEQUENCE
int dp[2000][2000];

class Solution {
public:

    string longestPalindrome(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        return solve(s,s1);
    }
    string solve(string s, string s1)
    {
        int i,j,mx=INT_MIN;
        for(i=0;i<=s.size();i++){dp[0][i]=0;}
        for(i=0;i<=s.size();i++){dp[i][0]=0;}
        for(i=1;i<=s.size();i++)
        {
            for(j=1;j<=s.size();j++)
            {
                if(s[i-1]==s1[j-1]){dp[i][j]=1+dp[i-1][j-1];}
                else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
            }
        }

        for(i=0;i<s.size();i++)
        {
            for(j=0;j<s.size();j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        string ans="";

        return ans;
    }
};*/
