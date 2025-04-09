#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    num = num < 0 ? -num : num; 
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", sumOfDigits(arr[i]));
        if (i < n - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
