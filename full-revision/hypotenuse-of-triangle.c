#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;

    printf("Enter sides A and B: ");
    scanf("%lf%lf", &a, &b);
    
    c = sqrt((a * a) + (b * b));

    printf("A = %lf, B = %lf, C = %lf", a, b, c);

    return 0;
}