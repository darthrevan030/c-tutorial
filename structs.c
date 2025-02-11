#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student { // Usually capital for struct names
    char name[50];
    char major[50];
    int age;
    double gpa;
    
};


int main(){

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    // student1.name = "Jim"; --> wont work since strings are basically arrays of characters
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 25;
    student2.gpa = 3.9;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Biology");

    printf("%f", student1.gpa);

    return 0;
}