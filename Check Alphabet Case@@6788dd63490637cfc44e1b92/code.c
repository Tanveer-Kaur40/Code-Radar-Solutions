#include <stdio.h>
int main() {
    char word;
    scanf("%c",&word);
    if((word >= 'A') && (word <= 'Z')){
        printf("Uppercase\n");
    }
    else if((word >= 'a') && (word <= 'z')){
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}