#include <stdio.h>

void selectionsort(int a[],int size);
void insertionsort(int a[],int size);
void bubblesort(int a[],int size);
int main()
{

    int a[5] = {5,4,3,2,1};
    int p;
    for(p=0;p<5;p++)
            printf("%d ",a[p]);
    printf("\n\n");
    selectionsort(a,5);
        printf("\n");

}

void selectionsort(int a[],int size)
{
    int i,j,min_idx;
    for(i=0;i<size;i++)
    {
        printf("i = %d\n",i);
        min_idx = i;
        int temp = a[i],p;
        for(j=i+1;j<size;j++)
        {
            if(a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        a[i] = a[min_idx];
        a[min_idx] = temp;
        for(p=0;p<5;p++)
            printf("%d ",a[p]);
        printf("\n");
    }

}

void insertionsort(int a[],int size)
{
    int i,j,p,key;
    for(i=1;i<size;i++)
    {
        key = a[i];
        printf("i= %d\n",i);
        for(j=i-1;j>=0 && a[j] > key;j--)
        {
            a[j+1] = a[j];
            printf("j = %d\n",j);
            for(p=0;p<5;p++)
            printf("%d ",a[p]);printf("\n");

        }a[j+1] = key;
        printf("Last Replace with key: ");
        for(p=0;p<5;p++)
            printf("%d ",a[p]);

        printf("\n\n");
    }
}

void bubblesort(int a[],int size)
{
    int i,j,p;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {

            if(a[j+1]<a[j])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            printf("i=%d, j= %d \t",i,j);
            for(p=0;p<5;p++)
            printf("%d ",a[p]);
            printf("\n");
        }


        printf("\n");
    }
}
