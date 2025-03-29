#include <stdio.h>
#include <limits.h>  // To use INT_MIN and INT_MAX

int main() {
    int max1 = INT_MIN, max2 = INT_MIN; // Two largest numbers (initialized to smallest possible int)
    int min1 = INT_MAX, min2 = INT_MAX; // Two smallest numbers (initialized to largest possible int)

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Finding two largest numbers
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        // Finding two smallest numbers
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int maxProduct = (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;
    printf("%d\n", maxProduct);

    return 0;
}


