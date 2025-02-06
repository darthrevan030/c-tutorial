#include <stdio.h>
#include <stdlib.h>
int maximum(int num1, int num2, int num3);

int main()
{
    printf("%d", maximum(400, 10000, 767));
    
    /* || is or, && is and, != is not, == is equals, ! is negation*/
    if (3 >2 || 2 > 5){
        printf("True");
    }
    else
        printf("False");

    return 0;
}

int maximum(int num1, int num2, int num3)
{
    int result;
    /*if(condition){execute this code}else if(condition){execute this code} else{execute this code}*/
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    }
    else{
        result = num3;
    }

    
    return result;
}