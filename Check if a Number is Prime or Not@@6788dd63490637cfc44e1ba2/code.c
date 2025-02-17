#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2, which is not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors of num from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // num is divisible by i, so it's not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
