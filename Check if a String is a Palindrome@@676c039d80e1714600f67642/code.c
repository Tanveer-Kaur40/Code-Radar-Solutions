#include <stdio.h>
#include <string.h>
int main(){
    char n[100];
    scanf("%s",&n);
    char temp = n;
    int len = strlen(n);
    for(int i=len-1;i<=0;i--){
        if(str(n)==temp){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}