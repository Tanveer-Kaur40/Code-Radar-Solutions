#include <stdio.h>
int main() {
    double a,b;
    char sign;
    scanf("%lf%lf%c",&a ,&b ,&sign);
    if(sign == '+'){
        printf("%.0lf",a+b);
    }
    else if(sign == '-'){
        printf("%.0lf",a-b);
    }
    else if(sign == '*'){
        printf("%.0lf",a*b);
    }
    else{
        printf("%.2lf",a/b);
    }
    return 0;
}