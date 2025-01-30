#include <stdio.h>
int main() {
    char word;
    scanf("%c",&word);
    if(word >= 'A' && word <= 'Z'){
        printf("%c",word);
    }
    else if(word >= 'a' && word <= 'z'){
        printf("%c",word);
    }
    else{
        printf("Not a character");
    }
    return 0;
}