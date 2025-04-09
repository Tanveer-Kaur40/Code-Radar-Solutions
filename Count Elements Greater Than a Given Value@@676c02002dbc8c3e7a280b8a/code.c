#include <stdio.h>

int main() {
    int n, x, count = 0;

    // Input size of array
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number X
    scanf("%d", &x);

    // Count elements greater than X
    for (int i = 0; i < n; i++) {
        if (arr[i] > x)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
