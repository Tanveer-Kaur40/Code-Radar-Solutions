#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = -1; // Start from the rightmost side
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = maxRight;
        if (current > maxRight) {
            maxRight = current;
        }
    }

    // Output transformed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
