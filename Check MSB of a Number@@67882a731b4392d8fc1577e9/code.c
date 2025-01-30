#include <stdio.h>
int main() {
    int num;
    int bits = sizeof(int) * 8;
    int msb_mask = 1 << (bits - 1);
    scanf("%d" ,&num);
    if(num & msb_mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}