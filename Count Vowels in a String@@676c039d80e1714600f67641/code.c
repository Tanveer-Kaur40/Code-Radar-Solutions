#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    scanf("%s",&n);
    int count=0;
    int len = strlen(n);
    for(int i=0;i<=len;i++){
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U' ){
            count++;
        }
}
    printf("%d",count);
    return 0;
}