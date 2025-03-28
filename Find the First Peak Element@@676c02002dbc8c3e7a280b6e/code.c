#include <stdio.h>

int findFirstPeak(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == N - 1 || arr[i] > arr[i + 1])) {
            return arr[i]; // Return the first peak element found
        }
    }
    return -1; // Return -1 if no peak found (this should never happen for valid input)
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read input array
    }

    int peak = findFirstPeak(arr, N);
    printf("%d\n", peak); // Print the first peak element

    return 0;
}
