#include <stdio.h>

int main(){

    int num = 20;

    int *ptr;

    ptr = &num;

    printf("num = %d, &num = %p\n", num, &num);
    printf("*ptr = %d, ptr = %p\n", *ptr, ptr);

    *ptr = 10;

    printf("num = %d, &num = %p\n", num, &num);
    printf("*ptr = %d, ptr = %p\n", *ptr, ptr);



    return 0;
}