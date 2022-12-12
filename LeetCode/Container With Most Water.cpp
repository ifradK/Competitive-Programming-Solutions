#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=INT_MIN,ans;
        for(int i=0,j=height.size()-1; i<j; )
        {
            int width=j-i;
            if(height[i]<=height[j]){ans=width*height[i]; i++;}
            else if(height[i]>height[j]){ans=width*height[j]; j--;}
            mx=max(ans,mx);
        }
        return mx;
    }
};

int main()
{
    int n,m,a;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    cout<<s.maxArea(v);
}


/*
9
1 8 6 2 5 4 8 3 7

*/


