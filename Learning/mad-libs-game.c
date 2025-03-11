#include <stdio.h>
#include <stdlib.h>

int main()
{
    char colour[10];
    char celebrityF[20];
    char celebrityL[20];
    char pluralNoun[20];

    printf("Enter a colour: ");
    scanf("%s", colour);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity's name: ");
    scanf("%s%s", celebrityF, celebrityL); // Scan and store 2 strings
    

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);


    return 0;
}