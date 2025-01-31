#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(isdigit(number)){
        if(1<=number<=100){
            printf("In range");
        }
        else{
            printf("Out of Range");
        }
    }
    return 0;
}