#include <stdio.h>

void add2(int *ptr);

int main(){

    int num = 8;
    
    // passing the address of num
    add2(&num);

    printf("The value of num is: %d", num);

    return 0;
}

void add2(int *ptr){

    ++(*ptr);
}
