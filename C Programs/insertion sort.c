#include<stdio.h>
main()
{
    int j,i,arr[8]= {4,3,2,10,12,1,5,6};
    for(i=0; i<8; i++)
    {
        int idx=-1;
        for(j=0; j<=i; j++)
        {
            if(arr[i+1]<arr[j])
            {
                idx=j;
                break;
            }
        }
    }
    getch();
}
