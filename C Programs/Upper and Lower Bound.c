#include<stdio.h>
main()
{
    char a[8]={7,9,21,25,25,25,71,88};
    int value,start=0,end=9,mid,upbound,lowbound,middle;
    scanf("%d",&value);
    while(start<=end)
    {
        mid=(int)((start+end)/2);
        if(a[mid]==value)
        {
            printf("Present at %d\n",mid+1);
            upbound=mid;
            lowbound=mid;
            middle=mid;
            while(a[mid]==value)
            {
                upbound++;
                mid++;
            }
            while(a[middle]==value)
            {
                lowbound--;
                middle--;
            }
            printf("Lower bound is %d and Upper bound is %d",lowbound+1,upbound-1);
            return 0;
        }
        else if(a[mid]>value)
        {
            end=mid-1;
        }
        else if(a[mid]<value)
        {
            start=mid+1;
        }
    }
    printf("Value not present.\n");
    printf("Lower bound is %d and Upper bound is %d",a[end],a[start]);
    getch();
}
