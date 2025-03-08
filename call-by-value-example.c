#include <stdio.h>

int add1(int);

int main(){

    int num = 5;
    
    num = add1(num);

    printf("The value of num is: %d", num);

    return 0;

}

int add1(int value){

    value++;
    return value;
}