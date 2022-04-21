#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,a,b,length,i;
    cin>>t;
    while(t--)
    {
        length=0;
        cin>>n>>b>>a;
        for(i=0;i<n;i++)
        {
            if(length==n)
            {
                break;
            }
            if(i%a==0){cout<<'a';length++;}
            else if(i%a==1){cout<<'b';length++;}
            else if(i%a==2){cout<<'c';length++;}
            else if(i%a==3){cout<<'d';length++;}
            else if(i%a==4){cout<<'e';length++;}
            else if(i%a==5){cout<<'f';length++;}
            else if(i%a==6){cout<<'g';length++;}
            else if(i%a==7){cout<<'h';length++;}
            else if(i%a==8){cout<<'i';length++;}
            else if(i%a==9){cout<<'j';length++;}
            else if(i%a==10){cout<<'k';length++;}
            else if(i%a==11){cout<<'l';length++;}
            else if(i%a==12){cout<<'m';length++;}
            else if(i%a==13){cout<<'n';length++;}
            else if(i%a==14){cout<<'o';length++;}
            else if(i%a==15){cout<<'p';length++;}
            else if(i%a==16){cout<<'q';length++;}
            else if(i%a==17){cout<<'r';length++;}
            else if(i%a==18){cout<<'s';length++;}
            else if(i%a==19){cout<<'t';length++;}
            else if(i%a==20){cout<<'u';length++;}
            else if(i%a==21){cout<<'v';length++;}
            else if(i%a==22){cout<<'w';length++;}
            else if(i%a==23){cout<<'x';length++;}
            else if(i%a==24){cout<<'y';length++;}
            else if(i%a==25){cout<<'z';length++;}
    }
    cout<<endl;
}
return 0;
}
