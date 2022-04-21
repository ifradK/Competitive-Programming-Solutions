#include<stdio.h>
#include<ctype.h>
main()
{
    int x,digit=0,punctuation=0;
    char character[6];
    printf("Enter 6 punctuations or digits");
    gets(character);

    for(x=0; x<6; x++)
    {
        if(isdigit(character[x]))
        {
            digit++;
        }
        if(ispunct(character[x]))
        {
            punctuation++;
        }
    }
    printf("%d punctuations and %d digits",punctuation,digit);
    getch();

}
