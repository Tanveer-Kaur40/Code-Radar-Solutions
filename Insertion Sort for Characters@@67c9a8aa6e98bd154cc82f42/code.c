#include <stdio.h>

void insertionSort(char arr[], int n) {
    int i, j;
    char key;

    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements that are greater than key
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n){
    for(i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
}



