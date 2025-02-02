#include <stdio.h>
int main() {
    int a,b;
    char sign;
    scanf("%d %d %c", &a ,&b ,&sign);
    if(sign == '+'){
        printf("%d", a+b);
    }
    else if(sign == '-'){
       printf("%d", a-b);
    }
    else if(sign == '*'){
        printf("%d", a*b);
    }
    else if(sign == '/'){
        if(b !=0 ){
            printf("%f", (float)a/b);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}