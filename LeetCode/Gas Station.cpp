class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cst=0, gs=0, mx=INT_MIN, temp=0, ans=0;
        vector<int> diff;
        for(int i=0;i<gas.size();i++){gs=gs+gas[i];}
        for(int i=0;i<cost.size();i++){cst=cst+cost[i];}
        if(gs<cst){return -1;}
        for(int i=0;i<gas.size();i++){diff.push_back(gas[i]-cost[i]);}
        for(int i=0;i<diff.size();i++)
        {
            ans = ans + diff[i];
            if(ans<0){ans=0; temp = i+1;}
        }
        return temp;
    }
};
