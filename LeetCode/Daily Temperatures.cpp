#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

stack<pair<int,int>> st;
vector<int> ngr;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        ngr.clear();
        while(!st.empty()){st.pop();}
        NGR(temperatures);
        return solve(temperatures);
    }

    void NGR(vector<int>& temperatures)
    {
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            if(st.size()==0){ngr.push_back(0);}
            else if(st.size()>0 && st.top().first>temperatures[i]){ngr.push_back(st.top().second);}
            else if(st.size()>0 && st.top().first<=temperatures[i])
            {
                while(st.size()>0 && st.top().first<=temperatures[i]){st.pop();}
                if(st.size()==0){ngr.push_back(0);}
                else{ngr.push_back(st.top().second);}
            }
            st.push({temperatures[i],i});
        }
        reverse(ngr.begin(),ngr.end());
    }

    vector<int> solve(vector<int>& temperatures)
    {
        vector<int> ans;
        for(int i=0;i<temperatures.size();i++)
        {
            int temp=ngr[i]-i;
            if(ngr[i]==0){ans.push_back(0);}
            else{ans.push_back(temp);}
        }
        //for(int i=0;i<ans.size();i++){cout<<ans[i]<<" ";}
        return ans;
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    s.dailyTemperatures(v);
//    for(int i=0;i<n;i++){cout<<nsr[i]<<" ";}
//    cout<<endl;
//    for(int i=0;i<n;i++){cout<<nsl[i]<<" ";}
}

/*
8
73 74 75 71 69 72 76 73
*/
