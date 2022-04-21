#include<stdio.h>
main()
{
    int i,j,k,n,d,m,p,count=0,total=0;
    scanf("%d %d",&n,&d);
    int a[n][n],b[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(m=0; m<n; m++)
    {
        for(p=0; p<n; p++)
        {
            for(i=m-d; i<=m+d; i++)
            {
                for(j=p-d; j<=p+d; j++)
                {
                    if(i>=0 && i<n && j>=0 && j<n)
                    {
                        total=total+a[i][j];
                        count++;
                        //printf("%d %d %d %d %d \n",m,p,i,j,total);
                    }
                }
                //printf("%d \n",total);
            }
            //printf("%d %d %d %d %d %d %d\n",m,p,i,j,total-a[m][p],count,(total-a[m][p])/(count-1));
            b[m][p]=(total-a[m][p])/(count-1);
            total=0;
            count=0;
        }
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    getch();
}

/*
3 1
1 2 3
4 5 6
7 8 9
*/
