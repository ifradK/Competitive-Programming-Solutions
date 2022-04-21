#include<stdio.h>
#include<string.h>
main()
{
    int i,j,consonants=0,vowels=0;
    char word[100];

    printf("Enter the word:");
    scanf("%s",&word);
    int length=strlen(word);

    for(j=0; j<length; j++)
    {
        if((word[j]=='a')||(word[j]=='e')||(word[j]=='i')||(word[j]=='o')||(word[j]=='u'))
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    printf("\nConsonants: %d",consonants);
    printf("\nVowels: %d",vowels);
    printf("\nLength of word is %d",length);

    getch();
}
