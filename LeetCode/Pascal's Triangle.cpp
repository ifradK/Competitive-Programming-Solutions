class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> v;
        vector<int> v1;
        int a[100][100] = {0};
        for(int i=0; i<numRows; i++)
        {
            if(i==0)
            {
                a[i][i] = 1;
            }
            else if(i==1)
            {
                for(int j=0; j<=i; j++)
                {
                    a[i][j]=1;
                }
            }
            else
            {
                a[i][0] = 1;
                a[i][i] = 1;
                for(int j=1; j<i; j++)
                {
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
            }
        }
        for(int i=0; i<numRows; i++)
        {
            for(int j=0; j<=i; j++)
            {
                v1.push_back(a[i][j]);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};
