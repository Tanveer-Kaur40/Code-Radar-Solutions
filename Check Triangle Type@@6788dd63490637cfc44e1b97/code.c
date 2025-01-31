#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a ,&b ,&c);
    if(a == b == c){
        printf("Equilateral");
    }
    else if((a == b && a != c && b != c) || (b == c && a != c && a!=b) || (c == a && b != c && a!=b)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}