#include <stdio.h>

// Function to manually sort the array (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the longest consecutive sequence
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;  // Edge case: Empty array

    // First, sort the array manually
    bubbleSort(arr, n);

    int maxLen = 1, currentLen = 1;

    // Traverse the sorted array
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            // If consecutive, increase current sequence length
            currentLen++;
        } else if (arr[i] != arr[i - 1]) {
            // If not consecutive, reset current sequence
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
            currentLen = 1;
        }
    }

    // Check one last time for the maximum sequence
    if (currentLen > maxLen) {
        maxLen = currentLen;
    }

    return maxLen;
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
    printf("%d\n", longestConsecutive(arr, n));

    return 0;
}
