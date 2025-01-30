#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if((a & 1) % 2 != 0 ){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}