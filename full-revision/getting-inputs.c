#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    int age;

    printf("What is your name?\n");
    fgets(name, 25, stdin); // name of the variable to store the input, the size of the input, the place to get the input from
    name[strlen(name)-1] = '\0'; // remove the newline character at the end of the fgets 

    printf("How old are you?\n");
    scanf("%d", &age); // have to indicate the address of the variable where the input will be stored

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}