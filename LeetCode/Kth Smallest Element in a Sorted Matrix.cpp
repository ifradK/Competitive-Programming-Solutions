#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());

        return v[k-1];
    }
};

int main()
{
    int n,a,m;
    cin>>m>>n;
    vector<int> v(m);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a;
            v[i].push_back(as);
        }
    }
    Solution s;
    s.kthSmallest(v);
}



