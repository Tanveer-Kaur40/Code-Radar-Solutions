#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxEven = -1; // Assume no even number

    // Check for largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }

    if (maxEven != -1)
        printf("%d\n", maxEven);
    else
        printf("-2");

    return 0;
}
