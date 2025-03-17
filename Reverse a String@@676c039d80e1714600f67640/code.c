#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    scanf("%s",&n);
    int len = strlen(n);
    char rev[50];
    int j=0;
    for(int i=len-1;i>=0;i--){
        rev[j]=n[i];
        j++;
    }
    printf("%s",rev);
    return 0;
}