#include <stdio.h>
#include <string.h>

void compressString(char* str, char* compressed) {
    int len = strlen(str);
    int count = 1, j = 0;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];

            // Convert count to single digits (supporting multiple-digit counts)
            if (count > 1) {
                char temp[10];
                sprintf(temp, "%d", count);
                for (int k = 0; temp[k] != '\0'; k++) {
                    compressed[j++] = temp[k];
                }
            }

            count = 1;
        }
    }

    compressed[j] = '\0';

    // Return original if compressed isn't shorter
    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}

int main() {
    char str[100];
    char compressed[200];

    scanf("%s", str);
    compressString(str, compressed);
    printf("%s\n", compressed);

    return 0;
}

