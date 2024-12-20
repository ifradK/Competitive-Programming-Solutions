#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

int heap[8];
int pos=-1;

void Insert(int num)
{
    if(pos+1==8){cout<<"HEAP FULL"<<endl;}
    else
    {
        pos++;
        heap[pos]=num;
        int child = pos;
        int parent = floor((child-1)/2);
        while(1)
        {
            if(heap[child]>heap[parent])
            {
                swap(heap[child],heap[parent]);
                child = parent;
            }
            if(parent==0){break;}
            parent = floor((child-1)/2);
        }
    }
}

void top()
{
    if(pos==-1){cout<<"HEAP EMPTY"<<endl;}
    else{cout<<"TOP "<<heap[0]<<endl;}
}

void Delete()
{
    if(pos==-1){cout<<"HEAP EMPTY"<<endl;}
    else
    {
        swap(heap[0],heap[pos]);
        pos--;
        int parent = 0,child1,child2;
        while(1)
        {
            child1 = parent*2+1;
            child2 = parent*2+2;

            if(child1 > pos){break;}
            if(child1<=pos && child2<=pos)
            {
                if(heap[child1]>=heap[child2])
                {
                    if(heap[child1]>heap[parent])
                    {
                        swap(heap[child1],heap[parent]);
                        parent = child1;
                    }
                    else{break;}
                }
                else
                {
                    if(heap[child2]>heap[parent])
                    {
                        swap(heap[child2],heap[parent]);
                        parent = child2;
                    }
                    else{break;}
                }
            }
            else
            {
                if(heap[child1]>heap[parent])
                {
                    swap(heap[child1],heap[parent]);
                    parent = child1;
                }
                else{break;}
            }
        }
    }
}


void print()
{
    cout<<"PRINT ";
    for(int i=0;i<=pos;i++){cout<<heap[i]<<" ";}
    cout<<endl;
}


int main()
{
    fastio;
    top();
    Delete();
    Insert(1);
//    print();
//    top();
    Insert(5);
//    print();
//    top();
    Insert(15);
//    print();
//    top();
    Insert(10);
//    print();
//    top();
    Insert(20);
//    print();
//    top();
    Insert(25);
//    print();
//    top();
    Insert(30);
//    print();
//    top();
    Insert(27);
//    print();
//    top();
    Insert(26);
//    print();
//    top();
    cout<<"FIRST DELETE"<<endl;
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();
    Delete();
    print();
    top();

    return 0;
}
