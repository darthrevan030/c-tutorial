#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30; 
    double gpa = 3.9;
    char grade = 'A';


    // values/characters etc get stored on the memory at a specific memory address in the RAM
    // humans can access the data attached to the variable by just referring to the name of the variable
    // computer will refer to the memory address where the data is stored

    printf("Age: %p\n", &age); // can print the memory address of where the variable age
    printf("GPA: %p\n", &gpa);
    printf("Grade: %p\n", &grade);
    return 0;
}