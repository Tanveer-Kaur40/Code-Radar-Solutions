#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    scanf("[^\n]",&n);
    int len = strlen(n);
    printf("%d",len);
    return 0;
}