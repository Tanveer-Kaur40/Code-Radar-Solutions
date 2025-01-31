#include <stdio.h>
int main() {
    float a,b;
    char sign;
    scanf("%f%f%c",&a ,&b ,&sign);
    if(sign == '+'){
        printf("%f",a+b);
    }
    else if(sign == '-'){
        printf("%.0f",a-b);
    }
    else if(sign == '*'){
        printf("%.0f",a*b);
    }
    else if(sign == '/'){
        printf("%.2lf",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}