#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,j;
    stack<char> st;
    string a,b;
    cin>>a>>b;
    long long matrix[a.size()+1][b.size()+1]= {0};
    memset(matrix,0,sizeof(matrix));
    for(i=1; i<=a.size(); i++)
    {
        for(j=1; j<=b.size(); j++)
        {
            if(a[i-1]!=b[j-1])
            {
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
            }
            else
            {
                matrix[i][j]=1+matrix[i-1][j-1];
            }
        }
    }
    for(i=a.size(),j=b.size(); i>=0,j>=0; )
    {
        if(matrix[i][j]==0)
        {
            break;
        }
        if(matrix[i][j]==matrix[i-1][j])
        {
            i--;
        }
        else if(matrix[i][j]==matrix[i][j-1])
        {
            j--;
        }
        else
        {
            st.push(a[i-1]);
            i--;
            j--;
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}


//for(i=0;i<=a.size();i++)
//    {
//        for(j=0;j<=b.size();j++)
//        {
//            cout<<matrix[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//cout<<matrix[a.size()][b.size()];
