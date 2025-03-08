#include <stdio.h>

int main(){

    int num1 = 3;
    int num2 = 5;

    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Initial Assignment: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");

    (*ptr1)++;
    printf("Increment (*ptr1)++: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");


    *ptr2 = *ptr1;
    printf("*ptr2 = *ptr1: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");

    *ptr2 = 10;
    printf("*ptr2 = 10: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");

    num1 = *ptr2;
    printf("num1 = *ptr2: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");

    *ptr1 = *ptr1 * 5;
    printf("*ptr1 = *ptr1 * 5: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");

    ptr2 = ptr1;
    printf("*ptr2 = ptr1: \n");
    printf("num1 = %d, &num1 = %p, *ptr1 = %d, ptr1 = %p\n", num1, &num1, *ptr1, ptr1);
    printf("num2 = %d, &num2 = %p, *ptr2 = %d, ptr2 = %p\n", num2, &num2, *ptr2, ptr2);
    printf("\n");
    
    return 0;
}