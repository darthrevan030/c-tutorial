#include <stdio.h>

void sort(int array[], int size);
void printArray(int array[], int size);

int main(){

    int array[] = {9, 7, 345, 3, 2, 6, 1, 9, 5, 4};
    int size = sizeof(array)/sizeof(array[0]);

    printArray(array, size);
    printf("\n");
    sort(array, size);
    printArray(array, size);

    return 0;
}

void sort(int array[], int size){
    
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j< size - i - 1 ; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int ar[], int size){
    for(int i = 0; i < size; i++){
        printf(" %d", ar[i]);
    }
}