#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, target;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);

    // To track which pairs have been printed
    bool printed[n][n];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target && !printed[i][j]) {
                // Check if the same value pair has been printed before
                bool already_printed = false;
                for (int x = 0; x < i; x++) {
                    for (int y = x + 1; y < n; y++) {
                        if ((arr[x] == arr[i] && arr[y] == arr[j]) || (arr[x] == arr[j] && arr[y] == arr[i])) {
                            already_printed = true;
                            break;
                        }
                    }
                    if (already_printed) break;
                }
                if (!already_printed) {
                    printf("%d %d\n", arr[i], arr[j]);
                    printed[i][j] = true;
                }
            }
        }
    }

    return 0;
}

