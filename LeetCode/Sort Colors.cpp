#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        //for(int i=0;i<nums.size();i++){cout<<nums[i]<<" ";}
    }

    void Merge(vector<int>& nums, int start, int mid, int end)
    {
        int l_size=mid-start+1, r_size=end-mid;
        int l_arr[l_size], r_arr[r_size];

        for(int i=0;i<l_size;i++){l_arr[i]=nums[start+i];}
        for(int i=0;i<r_size;i++){r_arr[i]=nums[mid+1+i];}

        int i=0,j=0,k=start;
        while(i<l_size && j<r_size)
        {
            if(l_arr[i]<=r_arr[j]){nums[k]=l_arr[i]; i++;}
            else if(l_arr[i]>r_arr[j]){nums[k]=r_arr[j]; j++;}
            k++;
        }
        while(i<l_size){nums[k]=l_arr[i]; i++; k++;}
        while(j<r_size){nums[k]=r_arr[j]; j++; k++;}
    }

    void mergeSort(vector<int>& nums, int start, int end)
    {
        if(start<end)
        {
            int mid=start+(end-start)/2;
            mergeSort(nums, start, mid);
            mergeSort(nums, mid+1, end);
            Merge(nums, start, mid, end);
        }
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.sortColors(v);
}

/*
6
2 0 2 1 1 0
*/


