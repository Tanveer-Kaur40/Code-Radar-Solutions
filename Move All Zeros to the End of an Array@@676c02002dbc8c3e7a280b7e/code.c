#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int j = 0; // Pointer for placing non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++; // Increment index for next non-zero element
        }
    }

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZeroesToEnd(arr, n); // Move zeros to the end

    return 0;
}
