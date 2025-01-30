#include <stdio.h>
int main() {
    char word;
    scanf("%c",&word);
    if((word >= 'A') && (word <= 'Z')){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    
    return 0;
}