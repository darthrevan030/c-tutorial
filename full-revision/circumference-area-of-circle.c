#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159;
    
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = PI * 2 * radius;

    // printf("radius: %lf\n", radius);
    // printf("area: %lf\n", area);
    // printf("circumference: %lf\n", circumference);
    
    printf("The circle of radius %lf has an area of %lf and a circumference of %lf", radius, area, circumference);

    return 0;
}
