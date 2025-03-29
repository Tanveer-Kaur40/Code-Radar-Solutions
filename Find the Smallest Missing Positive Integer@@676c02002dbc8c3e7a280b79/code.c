#include <stdio.h>

// Function to manually sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the smallest missing positive number
int findSmallestMissing(int arr[], int n) {
    // First, sort the array
    bubbleSort(arr, n);

    int smallestMissing = 1; // Start with 1 (smallest positive number)

    for (int i = 0; i < n; i++) {
        if (arr[i] == smallestMissing) {
            smallestMissing++; // Move to the next expected number
        }
    }
    return smallestMissing;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function and print result
    printf("%d\n", findSmallestMissing(arr, n));

    return 0;
}
