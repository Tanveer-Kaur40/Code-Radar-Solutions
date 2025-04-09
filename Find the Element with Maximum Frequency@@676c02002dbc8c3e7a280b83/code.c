#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of array

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxFreq = 0, mostFreqElement;
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            mostFreqElement = arr[i];
        }
    }

    printf("%d\n", mostFreqElement);
    return 0;
}
