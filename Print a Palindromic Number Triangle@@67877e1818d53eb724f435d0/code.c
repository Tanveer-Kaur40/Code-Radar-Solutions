#include <stdio.h>

void printPalindromeTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printPalindromeTriangle(N);
    return 0;
}
