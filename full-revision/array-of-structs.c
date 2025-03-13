#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    double gpa;
};

int main(){
    
    struct Student student1 = {"Sam", 5.0};
    struct Student student2 = {"Bob", 4.5};
    struct Student student3 = {"Jeff", 4.0};
    struct Student student4 = {"Bezos", 3.5};
    
    struct Student students[] = {student1, student2, student3, student4};

    for (int i =0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("Name: %s\t GPA: %.2lf\n", students[i].name, students[i].gpa);
    }
    return 0;
}