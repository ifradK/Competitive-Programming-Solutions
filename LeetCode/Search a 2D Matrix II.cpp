#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return solve(matrix,target);
    }

    bool solve(vector<vector<int>>& matrix, int target)
    {
        int i=0, j=matrix[0].size()-1;
        while(1)
        {
            if(i>=matrix.size() || j<0){return false;}
            if(matrix[i][j]==target){return true;}
            if(matrix[i][j]<target){i++;}
            else if(matrix[i][j]>target){j--;}
        }
    }
};

int main()
{
    int n,a,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            v[i].push_back(a);
        }
    }
    Solution s;
    cout<<s.searchMatrix(v);
}


/*
[1, 2, 3, 4, 5],
[6, 7, 8, 9, 10],
[11,12,13,14,15],
[16,17,18,19,20],
[21,22,23,24,25]]
19
*/

