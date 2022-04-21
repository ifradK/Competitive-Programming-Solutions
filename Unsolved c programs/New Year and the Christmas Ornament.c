#include<stdio.h>
main()
{
    int y[3];
    int k,i,j;
    scanf("%d %d %d",&y[0],&y[1],&y[2]);
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(y[i]>y[j])
            {
                k=y[i];
                y[i]=y[j];
                y[j]=k;
            }
        }
    }
    printf("%d",y[0]*3);
    getch();
}
