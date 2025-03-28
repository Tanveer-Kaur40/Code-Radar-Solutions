#include <stdio.h>
#include <limits.h> // For INT_MIN

void findSecondLargest(int arr[], int N) {
    if (N < 2) {
        printf("No second largest element\n");
        return;
    }

    int first = INT_MIN, second = INT_MIN; // Initialize to the smallest possible value

    for (int i = 0; i < N; i++) {
        if (arr[i] > first) { 
            second = first; // Update second largest
            first = arr[i]; // Update largest
        } else if (arr[i] > second && arr[i] < first) { 
            second = arr[i]; // Update second largest if it’s smaller than first but greater than second
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element\n"); // In case all elements are the same
    } else {
        printf("%d\n", second);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read input values
    }

    findSecondLargest(arr, N); // Call function

    return 0;
}
