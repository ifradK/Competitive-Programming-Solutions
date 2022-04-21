#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int r,c,i,j,bomb,row,column,n,x,y;
    int direction_row[4]={-1,1,0,0};
    int direction_col[4]={0,0,1,-1};
    while(1)
    {
        int node_in_next_layer=0,node_left_in_layer=1;
        bool reached_end=false;
        queue<int> rowq,colq;
        cin>>r>>c;
        if(r==0 && c==0)
        {
            break;
        }
        int matrix[r][c];
        bool visited[r][c]={false};
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                visited[i][j]=false;
            }
        }
        memset(matrix,0,sizeof(matrix));
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>row>>bomb;
            for(j=0;j<bomb;j++)
            {
                cin>>column;
                matrix[row][column]=1;
            }
        }
        int start_row,start_col,end_row,end_col,rr,cc,cnt=0;
        cin>>start_row>>start_col;
        cin>>end_row>>end_col;
        matrix[end_row][end_col]=2;
        rowq.push(start_row);
        colq.push(start_col);
        visited[start_row][start_col]=true;
        while(!rowq.empty())
        {
            x=rowq.front();
            y=colq.front();
            rowq.pop();
            colq.pop();
            if(matrix[x][y]==2)
            {
                reached_end=true;
                break;
            }
            //explore_bfs(x,y);
            for(i=0;i<4;i++)
            {
                rr=x+direction_row[i];
                cc=y+direction_col[i];
                if(rr<0 || cc<0 || rr>=r || cc>=c)
                {
                    continue;
                }
                if(visited[rr][cc]==true || matrix[rr][cc]==1)
                {
                    continue;
                }
                rowq.push(rr);
                colq.push(cc);
                visited[rr][cc]=true;
                node_in_next_layer++;
            }
            node_left_in_layer--;
            if(node_left_in_layer==0)
            {
                node_left_in_layer=node_in_next_layer;
                node_in_next_layer=0;
                cnt++;
            }
        }
        if(reached_end==true)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}



