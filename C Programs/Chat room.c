#include<stdio.h>
#include<string.h>
main()
{
    char a[100]={0},b[6]={0},c[]="hello";
    int length,i,j,k,l,p,z;

    scanf("%s",a);
    length=strlen(a);

    for(i=0; i<length; i++)
    {
        if(a[i]=='h')
        {
            b[0]='h';
            break;
        }
    }

    for(j=i+1; j<length; j++)
    {
        if(a[j]=='e')
        {
            b[1]='e';
            break;
        }
    }
    for(k=j+1; k<length; k++)
    {
        if(a[k]=='l')
        {
            b[2]='l';
            break;
        }
    }
    for(l=k+1; l<length; l++)
    {
        if(a[l]=='l')
        {
            b[3]='l';
            break;
        }
    }
    for(p=l+1; p<length; p++)
    {
        if(a[p]=='o')
        {
            b[4]='o';
            break;
        }
    }
    z=strcmp(b,c);
    if(z==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getch();
}
