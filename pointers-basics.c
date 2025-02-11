#include <stdio.h>
#include <stdlib.h>

int main(){

    
// pointers are just another type of data that we can work with, just that they happen to be memory addresses
// pointer variables are just a variable that then stores the memory address of another variable

    int age = 30; 
    double gpa = 3.9;
    char grade = 'A';

    int *pAge = &age; // pointer variable *pAge stores the memory address of the age variable
    double *pGpa = &gpa; // pointer variable *pGpa stores the memory address of the gpa variable
    char *pGrade = &grade; // pointer variable *pGrade stores the memory address of the grade variable


    printf("%p\n", &age); 
    printf("%p", pAge); // pAge is storing the memory address of where the value of age variable is stored
    printf("%d", *pAge); // *pAge is pointing to the value that is being stored at the memory address of the value of age variable
                            // ie *pAge is referring to the value stored at the memory address of the variable age
    return 0;
}
