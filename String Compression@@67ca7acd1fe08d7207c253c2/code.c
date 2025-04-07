#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char* str, char* compressed) {
    int len = strlen(str);
    int count = 1, j = 0;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];
            // convert count to string and append
            char countStr[10];
            sprintf(countStr, "%d", count);
            for (int k = 0; countStr[k] != '\0'; k++) {
                compressed[j++] = countStr[k];
            }
            count = 1;
        }
    }

    compressed[j] = '\0';

    // Check if compression actually shortened the string
    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}

int main() {
    char str[100];        // Input string
    char compressed[200]; // Compressed string with enough space for expansion

    // Read the input string
    scanf("%s", str);

    // Call the compressString function
    compressString(str, compressed);

    // Output the compressed string
    printf("%s\n", compressed);

    return 0;
}
