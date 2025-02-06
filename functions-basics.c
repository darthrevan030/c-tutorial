#include <stdio.h>
#include <stdlib.h>
void greetUser();

int main()
{
    char name[20];
    int age;

    printf("Please insert your name: ");
    scanf("%s", &name);

    printf("Please insert your age: ");
    scanf("%d", &age);

    greetUser(name, age);

    return 0;
}

void greetUser(char name[], int age)
{
    printf("Hello %s, you are %d years old", name, age);
}
