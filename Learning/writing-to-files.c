#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fpointer = fopen("employees.txt", "a");
    // "w" - write function overwrites whatever is in the file
    // "a" - append function adds to the back of the current contents in the file without changing the existing contents
    // File automatically created if does not exist
    // If exact or relative address not given, it will open file in the current directory (same directory as the program file)

    //fprintf(fpointer, "Jeff, Sales\nPam, Receptionist\nSam, Owner"); // initial write to file
    fprintf(fpointer, "\nKelly, Customer Service");


    fclose(fpointer); // always remember to close the file once done to save all changes

    return 0;
}