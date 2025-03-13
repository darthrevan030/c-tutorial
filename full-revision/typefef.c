#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an exiting data type a "nickname"
typedef char thisIsHowYouUseTypedef[25];

// usecase for typedef
typedef struct user{
    char name[25];
    char password[25];
    int id;
} User;

int main(){
    
    thisIsHowYouUseTypedef userABC = "LMAO";

    User user1 = {"Bro", "password123", 1234567890};
    User user2 = {"Bruh", "password321", 987654321};

    printf("name: %s, pw: %s, userid: %d\n", user1.name, user1.password, user1.id);
    printf("name: %s, pw: %s, userid: %d\n", user2.name, user2.password, user2.id);


    return 0;
}