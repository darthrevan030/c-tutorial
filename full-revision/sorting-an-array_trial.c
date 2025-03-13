#include <stdio.h>

void sort(int array[], int size);
void printArray(int array[], int size);

int main(){

    int array[] = {1,3,2,4,6,4,3,5};

    int lenArr = sizeof(array) / sizeof(array[0]);

    printArray(array, lenArr);
    printf("\n");
    sort(array, lenArr);
    printArray(array, lenArr);
    
    return 0;
}

void sort(int ar[], int size){
    for(int i = 0; i< size-1; i++){
        for(int j = 0; j < size-1; j++){
            if(ar[j] > ar[j+1]){
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    
}

void printArray(int ar[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", ar[i]);
    }
}