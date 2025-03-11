#include <stdio.h>
#include <stdlib.h>

int main(){

    char line[255];

    FILE *fpointer = fopen("employees.txt", "r");
// "r" - read function just reads whatever is in the file
    
    fgets(line, 255, fpointer); // read the first line of the file and store it in the line variable
    printf("%s", line); //print the line stored
    
    fgets(line, 255, fpointer); // every time fgets is used, it automatically moves the pointer to the next line in the file
    printf("%s", line);


    fclose(fpointer); // always remember to close the file once done to save all changes

    return 0;
}