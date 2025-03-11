#include <stdio.h>
#include <stdlib.h>
double cube(double num);

int main()
{
    double num;
    printf("Insert a Number: ");
    scanf("%lf", &num);
    printf("Answer: %f", cube(num));
    return 0;
}

double cube(double num)
{
    double result = num * num * num;
    
    return result;
}