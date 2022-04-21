#include<stdio.h>
main()
{
    char a[20]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};
    int start,end,mid,key,i;
    start=0;
    end=19;
    scanf("%d",&key);
    while(start<=end)
    {
        mid=(int)((start+end)/2);
        if(a[mid]==key)
        {
            printf("position of %d is at %d",key,mid+1);
            return 0;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
    }
    printf("Key in not present in the array.");
    getch();
}
