#include<stdio.h>
#include<string.h>
void divide(int a[],int start,int end);
void merge(int a[],int start1,int start2,int end1,int end2);
int main()
{
    int a[5]= {9,5,11,7,15};
    int length=5,i;
    divide(a,0,length-1);
    for(i=0; i<length; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void merge(int a[],int start1,int end1,int start2,int end2)
{
    int b[100];
    int start,end,k;
    start=start1;
    end=start2;
    k=0;
    while(start<=end1 && end<=end2)
    {
        if(a[start]<a[end])
            b[k++]=a[start++];
        else
            b[k++]=a[end++];
    }
    while(start<=end1)
        b[k++]=a[start++];
    while(end<=end2)
        b[k++]=a[end++];
    for(start=start1,end=0; start<=end2; start++,end++)
        a[start]=b[end];
}
void divide(int a[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        divide(a,start,mid);
        divide(a,mid+1,end);
        merge(a,start,mid,mid+1,end);
    }
}
