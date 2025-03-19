#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin); // Read the full input including spaces

    int count = 0;
    int length = strlen(str);

    // Iterate through the string
    for (int i = 0; i < length; i++) {
        // Count words when a non-space character follows a space or it's the first word
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ' && str[i] != '\n') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
