#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,i,j,k;
    char s[100],english[50]= {'\0'},foreign[50]= {'\0'},word[30];
    map<string,string> m;
    while(1)
    {
        j=0;
        gets(s);
        if(s[0]=='\0')
        {
            break;
        }
        for(i=0; s[i]!=' '; i++)
        {
            english[i]=s[i];
        }
        for(k=i+1; s[k]!='\0'; k++)
        {
            foreign[j]=s[k];
            j++;
        }
        foreign[j]='\0';
        m[foreign]=english;
    }
    while(scanf("%s",word)!=EOF)
    {
        if(m[word].empty())
        {
            cout<<"eh"<<endl;
        }
        else
        {
            cout<<m[word]<<endl;
        }
    }
    return 0;
}
