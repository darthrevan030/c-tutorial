#include <stdio.h>

int main(){

    int a = 2;
    int *p;
    int **pp;

    p = &a;
    pp = &p;

    a++;

    printf("a = %d, *p = %d, **pp = %d\n", a , *p, *pp);

    return 0;
}