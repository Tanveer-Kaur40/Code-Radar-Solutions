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

int main() {
    char arr[] = {'d', 'a', 'c', 'b'};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\nSorted array:   ");
    for(i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}



