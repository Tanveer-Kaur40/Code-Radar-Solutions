#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Array to store frequency of characters

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate frequency
    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
