#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    scanf("%[^\n]",&s1);
    char s2[100];
    scanf("%s",&s2);
    strcat(s1 , s2);
    printf("%s",s1);
    return 0;
}