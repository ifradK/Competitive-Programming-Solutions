#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j = prevBinarySearch(matrix,0,matrix.size()-1,target);
        if(j!=-1){return binarySearch(matrix,0,matrix[0].size()-1,j,target);}
        else{return false;}
    }

    int mn=-1;
    int prevBinarySearch(vector<vector<int>>& matrix, int start, int End, int target)
    {
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(matrix[mid][0]==target){return mid;}
            if(matrix[mid][0]<target)
            {
                mn=mid;
                start=mid+1;
            }
            else if(matrix[mid][0]>target)
            {
                End=mid-1;
            }
        }
        return mn;
    }

    bool binarySearch(vector<vector<int>>& matrix, int start, int End, int j, int target)
    {
        while(start<=End)
        {
            int mid=(start+End)/2;
            if(matrix[j][mid]==target){return true;}
            if(matrix[j][mid]<target){start=mid+1;}
            else if(matrix[j][mid]>target){End=mid-1;}
        }
        return false;
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

