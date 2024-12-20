#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int q[5];
int front = -1, back= -1;

void push(int num)
{
    if(back+1>=5){cout<<"Queue is full"<<endl;}
    else
    {
        if(back==-1){front=0;}
        back++;
        q[back]=num;
    }
}

void pop()
{
    if((front==-1 && back==-1) || (front>back)){cout<<"Queue is empty"<<endl;}
    else{front++;}
}

void print()
{
    for(int i=front; i<=back; i++){cout<<q[i]<<" ";}
    cout<<endl;
}

int main()
{
    fastio;
    pop();
    push(1);
    print();
    push(2);
    print();
    push(3);
    print();
    push(4);
    print();
    push(5);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
}
