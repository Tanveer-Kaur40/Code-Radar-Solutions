#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    scanf("%[^\n]",n);
    int len = strlen(n);
    int count = 0;
    for(int i=0;i<=len;i++){
        if(n[i]==' ')continue;
        count++;
    }
    printf("%d",count);
    return 0;
}