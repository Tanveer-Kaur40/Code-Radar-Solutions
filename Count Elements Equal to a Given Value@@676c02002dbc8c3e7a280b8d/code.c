#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value to be compared
    scanf("%d", &x);
    
    // Count occurrences
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    // Print result
    printf("%d\n", count);
    
    return 0;
}
