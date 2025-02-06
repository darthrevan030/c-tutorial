#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d", luckyNumbers[0]);

    int emptyArray[100]; // Number in square brackets tells the program how many elements in the array
    emptyArray[0] = 10000;
    printf("%d", emptyArray[0]);

    char phrase[20] = "Array"; // This is technically an array
    
    return 0;
}