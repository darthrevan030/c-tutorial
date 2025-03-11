#include <stdio.h>

int main()
{
    int fav_num = 867676;
    char fav_letter = 'i';
    char category[] = "Number";

    printf("My favorite %s is %d\n", "Number", 500); //format specifiers for string, integer
    printf("My favorite %s is %f\n", "Number", 500.896); //format specifiers for string, float
    printf("My favorite %s is %c\n", "Letter", 'i'); //format specifiers for string, character
    printf("My favorite %s is %d\n", category, fav_num); //format specifiers for string, integer. Can also do the same thing with character, float, double

    return 0;
}