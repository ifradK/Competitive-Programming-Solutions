#include<stdio.h>
main()
{
    int i,year;
    int a1,a2,a3,a4;
    scanf("%d",&year);
    for(i=0;i>=0;i++)
    {
        year++;
      a4=year%10;
      a3=(year/10)%10;
      a2=(year/100)%10;
      a1=(year/1000)%10;
      if(a1!=a2 && a2!=a3 && a3!=a4 && a1!=a4 && a1!=a3 && a2!=a4)
      {
          break;
      }

    }
    printf("%d",year);
    getch();
}
