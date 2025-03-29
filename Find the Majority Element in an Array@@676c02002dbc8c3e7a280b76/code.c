#include <stdio.h>

// Function to find the majority element
void countNum(int arr[], int N) {
    int maxCount = 0, majorityElement = -1;

    // Loop to count occurrences of each element
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if the current element is the majority
        if (count > N / 2) {
            majorityElement = arr[i];
            break;
        }
    }

    // Print the majority element or -1 if none exists
    printf("%d\n", majorityElement);
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find the majority element
    countNum(arr, N);

    return 0;
}
