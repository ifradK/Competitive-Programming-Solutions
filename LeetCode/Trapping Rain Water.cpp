#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        return solve(height, height.size());
    }

    int solve(vector<int>& height, int n)
    {
        int left[n],right[n],cnt=0,mx=INT_MIN;
        for(int i=0;i<n;i++){mx=max(mx,height[i]);left[i]=mx;}
        mx=INT_MIN;
        for(int i=n-1;i>=0;i--){mx=max(mx,height[i]);right[i]=mx;}
        for(int i=1;i<n-1;i++)
        {
            int temp=min(left[i-1],right[i+1]);
            if(height[i]<temp){cnt=cnt+temp-height[i];}
        }
        return cnt;
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    cout<<s.trap(v)<<endl;
}

/*
12
0 1 0 2 1 0 1 3 2 1 2 1

6
4 2 0 3 2 5
*/

