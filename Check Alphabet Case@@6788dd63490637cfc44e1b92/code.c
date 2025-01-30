#include <stdio.h>
int main() {
    char word;
    scanf("%c",&word);
    if((word >= 'A') && (word <= 'Z')){
        printf("Uppercase");
    }
    else if((word >= 'a') && (word <= 'z')){
        printf("Lowercase");
    }
    else{
        printf("Not a character");
    }
    return 0;
}