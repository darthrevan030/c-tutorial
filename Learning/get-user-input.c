#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("You are %d\n", age);

    double gpa;
    printf("Enter your gpa: \n");
    scanf("%lf", &gpa); // Looking for a doubleg input
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: \n");
    scanf(" %c", &grade); // needs space before %c since %d ignores trailing blanks while %c doesn't
    printf("Your grade is %c\n", grade);

    char name[20];
    printf("Enter your name: \n");
    //scanf("%s", &name); // Potential issue with scanf with strings is that 
    //it will stop at the first whitespace/space. 
    //Also mixing scanf and fgets is problematic as the enter pressed when inputting anything is store as a \n in the iostream
    //That might cause a user input to be skipped over as the program takes the stored newline character as an input
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name);

    return 0;
}