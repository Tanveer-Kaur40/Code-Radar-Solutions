#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}
