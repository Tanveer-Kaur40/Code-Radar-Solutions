// Your code here...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<=len;i++){
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
    return 0;
}