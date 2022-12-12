#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int times=matrix.size()-1;
        int pos=matrix.size()/2;
        int start=0;
        int end=matrix.size()-1;
        while(pos--)
        {
            int curr_times=times;
            while(curr_times--)
            {
                int temp=matrix[start][start];
                for(int i=start+1; i<=end; i++)
                {
                    int prev=temp;
                    temp=matrix[start][i];
                    matrix[start][i]=prev;
                }

                for(int i=start+1; i<=end; i++)
                {
                    int prev=temp;
                    temp=matrix[i][end];
                    matrix[i][end]=prev;
                }

                for(int i=end-1; i>=start; i--)
                {
                    int prev=temp;
                    temp=matrix[end][i];
                    matrix[end][i]=prev;
                }

                for(int i=end-1; i>=start; i--)
                {
                    int prev=temp;
                    temp=matrix[i][start];
                    matrix[i][start]=prev;
                }
            }
            start++;
            end--;
            times=times-2;
        }

//        cout<<matrix[0][0]<<" ";
//        cout<<matrix[0][1]<<" ";
//        cout<<matrix[0][2]<<endl;
//
//        cout<<matrix[1][0]<<" ";
//        cout<<matrix[1][1]<<" ";
//        cout<<matrix[1][2]<<endl;
//
//        cout<<matrix[2][0]<<" ";
//        cout<<matrix[2][1]<<" ";
//        cout<<matrix[2][2]<<endl;
    }

};

int main()
{
    vector<vector<int>> v1(3, std::vector<int>(3));

    v1[0][0] = 1;
    v1[0][1] = 2;
    v1[0][2] = 3;

    v1[1][0] = 4;
    v1[1][1] = 5;
    v1[1][2] = 6;

    v1[2][0] = 7;
    v1[2][1] = 8;
    v1[2][2] = 9;

    Solution s;
    s.rotate(v1);
}


/*
v1[0][0] = 5;
    v1[0][1] = 1;
    v1[0][2] = 9;
    v1[0][3] = 11;


    v1[1][0] = 2;
    v1[1][1] = 4;
    v1[1][2] = 8;
    v1[1][3] = 10;

    v1[2][0] = 13;
    v1[2][1] = 3;
    v1[2][2] = 6;
    v1[2][3] = 7;

    v1[3][0] = 15;
    v1[3][1] = 14;
    v1[3][2] = 12;
    v1[3][3] = 16;
*/





