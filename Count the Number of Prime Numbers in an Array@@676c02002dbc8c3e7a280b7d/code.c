#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0; // Numbers < 2 are not prime

    for (int i = 2; i * i <= num; i++) { // Loop from 2 to sqrt(num)
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to count prime numbers in an array
int countPrimes(int arr[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) { // Check if arr[i] is prime
            count++;
        }
    }

    return count; // Return the total count of prime numbers
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n]; // Array declaration
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Taking input
    }

    int primeCount = countPrimes(arr, n); // Count prime numbers
    printf("%d\n", primeCount); // Print the result

    return 0;
}
