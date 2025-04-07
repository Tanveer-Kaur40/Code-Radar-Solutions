#include <string.h>

void compressString(char* str, char* compressed) {
    int len = strlen(str);
    int count = 1, j = 0;

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];

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

    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}


