#include <stdio.h>
int main() {
    char word;
    scanf("%c", &word);
    if(isalpha(word)){
        if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    else if(isdigit(word)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}