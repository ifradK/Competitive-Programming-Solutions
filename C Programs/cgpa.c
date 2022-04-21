#include<stdio.h>
main()
{
    int a,i,marks;
    double cgpa,gpa=0;

    printf("Enter the no of subjects:");
    scanf("%d",&a);

    printf("Enter %d marks of subjects\n",a);

    for(i=0; i<a; i++)
    {
        printf("Enter another students marks\n");
        scanf("%d", &marks);

        if(marks>=100 || marks<0)
        {
            printf("The marks is not possible\n");
        }
        else if(marks>=80)
        {
            printf("A+\n");
            gpa=gpa+4;
        }
        else if(marks>=75 && marks<80)
        {
            printf("A\n");
            gpa=gpa+3.75;
        }
        else if(marks>=70 && marks<75)
        {
            printf("A-\n");
            gpa=gpa+3.5;
        }
        else if(marks>=65 && marks<70)
        {
            printf("B+\n");
            gpa=gpa+3;
        }
        else if(marks>=60 && marks<65)
        {
            printf("B\n");
            gpa=gpa+2.5;
        }
        else if(marks>=40 && marks<60)
        {
            printf("D\n");
            gpa=gpa+2;
        }
        else if(marks>=40)
        {
            printf("F\n");
            gpa=gpa+0;
        }
        else
        {
            printf("None\n");
        }
    }
    cgpa=gpa/a;
    printf("The cgpa is %f",cgpa);

    getch();
}
