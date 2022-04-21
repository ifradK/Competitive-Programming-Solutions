#include<stdio.h>
#include<string.h>
main()
{
    int i,j,alphabets=0,digits=0;
    char sentence[100];

    printf("Enter the sentence:");
    scanf("%s",&sentence);
    int length=strlen(sentence);

    for(j=0; j<length; j++)
    {
        if((sentence[j]=='0')||(sentence[j]=='1')||(sentence[j]=='2')||(sentence[j]=='3')||(sentence[j]=='4')||(sentence[j]=='5')||(sentence[j]=='6')||(sentence[j]=='7')||(sentence[j]=='8')||(sentence[j]=='9'))
        {
            digits++;
        }
        else
        {
            alphabets++;
        }
    }
    printf("\nAlphabets: %d",alphabets);
    printf("\nDigits: %d",digits);
    printf("\nLength of word is %d",length);

    getch();
}
