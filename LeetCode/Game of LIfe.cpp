class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(), m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int live=0;
                if(board[i][j]==0)
                {
                    if(i-1>=0 && i-1<n && j-1>=0 && j-1<m && (board[i-1][j-1]==3 || board[i-1][j-1]==1)){live++;}
                    if(i-1>=0 && i-1<n && j>=0 && j<m && (board[i-1][j]==3 || board[i-1][j]==1))        {live++;}
                    if(i-1>=0 && i-1<n && j+1>=0 && j+1<m && (board[i-1][j+1]==3 || board[i-1][j+1]==1)){live++;}
                    if(i>=0 && i<n && j-1>=0 && j-1<m && (board[i][j-1]==3 || board[i][j-1]==1))        {live++;}
                    if(i>=0 && i<n && j+1>=0 && j+1<m && (board[i][j+1]==3 || board[i][j+1]==1))        {live++;}
                    if(i+1>=0 && i+1<n && j-1>=0 && j-1<m && (board[i+1][j-1]==3 || board[i+1][j-1]==1)){live++;}
                    if(i+1>=0 && i+1<n && j>=0 && j<m && (board[i+1][j]==3 || board[i+1][j]==1))        {live++;}
                    if(i+1>=0 && i+1<n && j+1>=0 && j+1<m && (board[i+1][j+1]==3 || board[i+1][j+1]==1)){live++;}

                    if(live==3){board[i][j]=2;}
                }
                else
                {
                    if(i-1>=0 && i-1<n && j-1>=0 && j-1<m && (board[i-1][j-1]==1 || board[i-1][j-1]==3)){live++;}
                    if(i-1>=0 && i-1<n && j>=0 && j<m && (board[i-1][j]==1 || board[i-1][j]==3))        {live++;}
                    if(i-1>=0 && i-1<n && j+1>=0 && j+1<m && (board[i-1][j+1]==1 || board[i-1][j+1]==3)){live++;}
                    if(i>=0 && i<n && j-1>=0 && j-1<m && (board[i][j-1]==1 || board[i][j-1]==3))        {live++;}
                    if(i>=0 && i<n && j+1>=0 && j+1<m && (board[i][j+1]==1 || board[i][j+1]==3))        {live++;}
                    if(i+1>=0 && i+1<n && j-1>=0 && j-1<m && (board[i+1][j-1]==1 || board[i+1][j-1]==3)){live++;}
                    if(i+1>=0 && i+1<n && j>=0 && j<m && (board[i+1][j]==1 || board[i+1][j]==3))        {live++;}
                    if(i+1>=0 && i+1<n && j+1>=0 && j+1<m && (board[i+1][j+1]==1 || board[i+1][j+1]==3)){live++;}

                    if(live<2){board[i][j]=3;}
                    else if(live==2 || live==3){board[i][j]=1;}
                    else if(live>3){board[i][j]=3;}
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==3){board[i][j]=0;}
                else if(board[i][j]==2){board[i][j]=1;}
            }
        }
    }
};
