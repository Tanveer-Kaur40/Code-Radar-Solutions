#include <stdio.h>
int main() {
    int num;
    scanf("%d",&a);
    if(num<2){
        printf("Not prime");
    }
    else if(num>2 && (num<(num**0.5)+1)){
        printf("Prime");
    }
    return 0;
}