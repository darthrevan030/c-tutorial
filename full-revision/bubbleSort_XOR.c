#include <stdio.h>
#include <string.h>

int main(){
    char str[12] = "Hello";

    for(int i = 0; i < strlen(str) - 1; i++){
        for(int j = 0; j < strlen(str) - 1; j++){
            str[j] = str[j] ^ str[j+1];
            str[j+1] = str[j] ^ str[j+1];
            str[j] = str[j] ^ str[j+1];
        }
    }

    printf("%s", str);

    return 0;
}