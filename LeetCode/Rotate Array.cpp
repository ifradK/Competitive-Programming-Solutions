#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;


//UNSOLVED (PROBLEM IN THE APPROACH.....FAILS FOR SOME TEST CASES)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        auto it = nums.end()-k;
        int k1=k;
        while(k1--){v.push_back(*it); it++;}
        auto it1 = nums.end()-k, it2 = nums.end();
        nums.erase(it1,it2);
        for(int i=v.size()-1;i>=0;i--){nums.insert(nums.begin(),v[i]);}
        //for(int i=0;i<nums.size();i++){cout<<nums[i]<<" ";}
    }
};

int main()
{
    int a,m,n;
    cin>>n>>m;
    vector<int> v;
    for(int j=0; j<n; j++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    s.rotate(v,m);
}

/*
7 2
1 2 3 4 5 6 7

4 2
1 100 3 99

4 2
1 2 3 4

1 2
-1

*/




//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        k++;
//        cout<<"H "<<endl;
//        while(k--)
//        {
//            cout<<"K "<<endl;
//            auto it = nums.begin();
//            nums.push_back(*it);
//            auto it2 = it + 1;
//            nums.erase(it);
//        }
//        for(int i=0;i<nums.size();i++){cout<<nums[i]<<" ";}
//    }
//};


//cout<<"K1 "<<endl;
//            auto it = nums.begin();
//            cout<<"K2 "<<endl;
//            nums.push_back(*it);
//            cout<<"K3 "<<endl;
//            auto it2 = it + 1;
//            cout<<"K4 "<<endl;
//            nums.erase(it);
//            cout<<"K5 "<<endl;
