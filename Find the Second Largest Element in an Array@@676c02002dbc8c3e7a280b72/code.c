#include <stdio.h>

int main() {
    int n, i;
    
    // Taking array size input

    scanf("%d", &n);
    
    // Check if size is valid
    if (n < 2) {
        printf("-1\n");  // Not enough elements for a second largest
        return 1;
    }
    
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0], second_largest = -1;
    
    // Finding the largest and second largest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && (second_largest == -1 || arr[i] > second_largest)) {
            second_largest = arr[i];
        }
    }
    
    // If second_largest is still -1, it means no valid second largest number exists
    if (second_largest == -1) {
        printf("-1\n");
    } else {
        printf("%d", second_largest);
    }
    
    return 0;
}

