#include <stdio.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("Enter the first number: \n");
    scanf("%lf", &num1);
    printf("Enter the second number: \n");
    scanf("%lf", &num2);
    printf("Enter an operator: \n");
    scanf(" %c", &operator);

    switch(operator){
        case'+':
            result = num1 + num2;
            break;
        case'-':
            result = num1 - num2;
            break;
        case'*':
            result = num1 * num2;
            break;
        case'/':
            result = num1 / num2;
            break;
    }

    printf("Result = %.2lf", result);

    return 0;
}