#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int i,j;
    int direction_row[8]={-2,-2,1,-1,2,2,-1,1};
    int direction_col[8]={-1,1,-2,-2,-1,1,2,2};
    string pos1,pos2;
    while(cin>>pos1>>pos2)
    {
        int node_in_next_layer=0,node_left_in_layer=1,cnt=0;
        bool reached_end=false;
        queue<int> rowq,colq;
        int matrix[9][9]={0};
        memset(matrix,0,sizeof(matrix));
        bool visited[9][9]={false};
        memset(visited,false,sizeof(visited));
        int x1,x2,y1,y2,x,y,rr,cc;


        x1=pos1[1]-48;
        y1=pos1[0]-96;
        x2=pos2[1]-48;
        y2=pos2[0]-96;
        matrix[x2][y2]=2;
        rowq.push(x1);
        colq.push(y1);
        visited[x1][y1]=true;
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
            for(i=0;i<8;i++)
            {
                rr=x+direction_row[i];
                cc=y+direction_col[i];
                if(rr<1 || cc<1 || rr>8 || cc>8)
                {
                    continue;
                }
                if(visited[rr][cc]==true)
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
            cout<<"To get from "<<pos1<<" to "<<pos2<<" takes "<<cnt<<" knight moves."<<endl;
        }
        while(!rowq.empty() && !colq.empty())
        {
            rowq.pop();
            colq.pop();
        }
    }
    return 0;
}
