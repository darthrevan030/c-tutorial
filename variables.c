#include <stdio.h>

int main()
{
    char character_name[] = "John";
    int character_age = 35;
    
    printf("There once was a man named %s\n", character_name);
    printf("He was %d years old\n", character_age);

    character_age = 300000;
    printf("He really liked the name %s\n", character_name);
    printf("But he did not like being %d\n", character_age);

    return 0;
}