#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    scanf("%s",&n);
    int len = strlen(n);
    for(int i=len-1;i>=0;i--){
        printf("%c",n[i]);
    }
    
    return 0;
}