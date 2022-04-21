#include<stdio.h>
#include<string.h>
main()
{
    int n,i,j,k;
    char m[100]={0},q,a[110][110]= {0};
    scanf("%d",&n);
    for(k=0; k<n; k++)
    {
        scanf("%s",a[k]);
    }
    for(k=0; k<n; k++)
    {
        for(i=0; i<strlen(a[k]); i++)
        {
            for(j=i+1; j<strlen(a[k]); j++)
            {
                if(a[k][i]>a[k][j])
                {
                    q=a[k][i];
                    a[k][i]=a[k][j];
                    a[k][j]=q;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(m,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],m);
            }
        }
    }
    for(k=0; k<n; k++)
    {
        printf("%s\n",a[k]);
    }
    getch();
}

