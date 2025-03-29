#include <stdio.h>

void maxProduct(int arr[], int n) {
    if (n < 2) {
        printf("No valid pairs\n");
        return;
    }

    int max1 = arr[0], max2 = arr[1];

    // Ensure max1 is the largest and max2 is second largest
    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    // Traverse the array to find the two largest numbers
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("%d\n", max1 * max2);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    maxProduct(arr, n);
    return 0;
}
