#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the median
    if (n % 2 == 1) {
        // Odd number of elements
        printf("%d\n", arr[n / 2]);
    } else {
        // Even number of elements - average of two middle elements
        int median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        printf("%d\n", median);
    }

    return 0;
}

