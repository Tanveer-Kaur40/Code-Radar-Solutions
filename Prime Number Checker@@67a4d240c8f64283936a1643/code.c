#include <stdio.h>

// Function declaration
int is_prime(int num);

// Function definition
int is_prime(int num) {
    if (num < 2) 
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t); // Read the number of test cases
    
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", is_prime(num)); // Use the correct function name
    }
    
    return 0;
}
