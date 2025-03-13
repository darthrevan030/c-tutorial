#include <stdio.h>
#include <string.h>

void sort(char str[50]);

int main(){
    char str[50] = "this is not sorted";

    printf("%s", str);
    printf("\n");
    sort(str);

    printf("%s", str);

    return 0;
}

void sort(char str[50]){
    int len = strlen(str);

    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if (str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}