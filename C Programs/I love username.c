#include<stdio.h>
main()
{
    int n,i,j,k,count=0,b=0;
    int a[1010]= {0};
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=1; j<n; j++)
    {
        b=0;
        for(k=0; k<j; k++)
        {
            if(a[j]>a[k])
            {
                b++;
            }
        }
        if(b==j)
        {
            count++;
        }
    }
    for(j=1; j<n; j++)
    {
        b=0;
        for(k=0; k<j; k++)
        {
            if(a[j]<a[k])
            {
                b++;
            }
        }
        if(b==j)
        {
            count++;
        }
    }
    printf("%d",count);
    getch();
}
