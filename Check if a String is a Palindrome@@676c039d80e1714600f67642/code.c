#include <stdio.h>
#include <string.h>
int main(){
    char n[100];
    scanf("%s",&n);
    char temp[100];
    strcpy(temp,n);
    int len = strlen(n);
    int j=0;
    for(int i=len-1;i>=0;i--){
        temp[j]=n[i];
        j++;
        
    }
    if(strcmp(n,temp)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}