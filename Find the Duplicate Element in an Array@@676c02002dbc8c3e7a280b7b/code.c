#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    int foundDuplicate = 0;

    printf("Duplicate elements:\n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark duplicate as visited
                }
            }
            if (count > 1) {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found.\n");
    }

    return 0;
}
