#include <stdio.h>
int main() {
    int a,b,c,d,h;
    scanf("%d%d%d" , &a ,&b ,&c);
    d = c*c;
    h = a*a + b*b;
    if ( d == h){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}