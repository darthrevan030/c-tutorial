#include <stdio.h>

int main(){

    double celsius;
    double fahrenheit;
    int choice;


    printf("Enter the a choice: \n");
    printf("2: Celsius to Fahrenheit\n");
    printf("1: Fahrenheit to Celsius\n");
    printf("0: Quit\n");
    scanf("%d", &choice);

    switch(choice){
        case 2: 
            //celsius to farenheit logic
            printf("Enter the temperature in Celsius: ");
            scanf("%lf", &celsius);

            fahrenheit = (celsius * (9 / 5)) + (double)32;
            
            printf("\nThe temperature is %.1lf degrees Fahrenheit.", fahrenheit);
            break;
        case 1:
            // fahrenheit to celsius logic
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%lf", &fahrenheit);

            celsius = (fahrenheit - (double)32) * (5 / 9);
            
            printf("The temperature is %.1lf degrees Celsius.", celsius);
            break;
        case 0:
            break;
    }

}
