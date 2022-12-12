class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        long long i,start=prices[0],diff=-1;
        for(i=0; i<prices.size(); i++)
        {
            if(prices[i]<start)
            {
                start=prices[i];
            }
            else
            {
                diff=max(diff,prices[i]-start);
            }
        }
        if(diff==-1)
        {
            return 0;
        }
        else
        {
            return diff;
        }
    }
};
