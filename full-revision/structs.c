#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

int main(){
    
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bruh");
    player2.score = 16;

    printf("%s: %d\n", player1.name, player1.score);
    printf("%s: %d\n", player2.name, player2.score);
    return 0;
}