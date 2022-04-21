#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    string str1,str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        int len1=str1.size(), len2=str2.size(), i, j;
        int matrix[len1+1][len2+1];
        memset(matrix,0,sizeof(matrix));

        for(i=0;i<len1;i++)
        {
            for(j=0;j<len2;j++)
            {
                if(str1[i]==str2[j])
                {
                    matrix[i+1][j+1]=matrix[i][j]+1;
                }
                else
                {
                    matrix[i+1][j+1]=max(matrix[i][j+1],matrix[i+1][j]);
                }
            }
        }
        cout<<matrix[len1][len2]<<endl;
    }
    return 0;
}
