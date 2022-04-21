#include<stdio.h>
#include<math.h>
main()
{
    int i,j,a,b;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("4 %d",a-4);
        return 0;
    }
    else
    {
    for(i=4;i<a;i=i+2)
    {
        j=a-i;
        for(b=3;b<=sqrt(j);b++)
        {
            if(j%b==0)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    }

        getch();

}
