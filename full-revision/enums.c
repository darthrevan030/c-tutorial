#include <stdio.h>

// enum (basically the same as enumerate) = a user defined type of named integer identifiers
// helps to make a program more readable

// can define how its being enumerated
//enum Day{Mon, Tues, Wed, Thurs, Fri, Sat, Sun}; - enumerate by day --> automatically monday = 0, tuesday = 1 and so on
enum Day{Mon = 1, Tues = 2, Wed = 3, Thurs = 4, Fri = 5, Sat = 6, Sun = 7}; // can also force the enumeration


int main(){

    enum Day today = Sun;

    // printf("%d", today); // treated like an integer


    if (today == Sat || today == Sun){
        printf("Weekend");
    } else {
        printf("Working Day :(");
    }


    return 0;
}