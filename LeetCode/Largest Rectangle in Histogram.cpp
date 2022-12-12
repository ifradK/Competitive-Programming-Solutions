#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

stack<pair<int,int>> st;
vector<int> nsl, nsr;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        nsl.clear();
        nsr.clear();
        while(!st.empty()){st.pop();}
        NSR(heights);
        while(!st.empty()){st.pop();}
        NSL(heights);
        return solve(heights, heights.size());
    }

    void NSR(vector<int>& heights)
    {
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(st.size()==0){nsr.push_back(heights.size());}
            else if(st.size()>0 && st.top().first<heights[i]){nsr.push_back(st.top().second);}
            else if(st.size()>0 && st.top().first>=heights[i])
            {
                while(st.size()>0 && st.top().first>=heights[i]){st.pop();}
                if(st.size()==0){nsr.push_back(heights.size());}
                else{nsr.push_back(st.top().second);}
            }
            st.push({heights[i],i});
        }
        reverse(nsr.begin(),nsr.end());
    }

    void NSL(vector<int>& heights)
    {
        for(int i=0;i<heights.size();i++)
        {
            if(st.size()==0){nsl.push_back(-1);}
            else if(st.size()>0 && st.top().first<heights[i]){nsl.push_back(st.top().second);}
            else if(st.size()>0 && st.top().first>=heights[i])
            {
                while(st.size()>0 && st.top().first>=heights[i]){st.pop();}
                if(st.size()==0){nsl.push_back(-1);}
                else{nsl.push_back(st.top().second);}
            }
            st.push({heights[i],i});
        }
    }

    int solve(vector<int>& heights, int n)
    {
        int width[n],area[n], mx=INT_MIN;
        for(int i=0;i<n;i++){width[i]=nsr[i]-nsl[i]-1;}
        for(int i=0;i<n;i++){area[i]=heights[i]*width[i]; mx=max(mx,area[i]);}
        return mx;
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    cout<<s.largestRectangleArea(v)<<endl;
//    for(int i=0;i<n;i++){cout<<nsr[i]<<" ";}
//    cout<<endl;
//    for(int i=0;i<n;i++){cout<<nsl[i]<<" ";}
}
