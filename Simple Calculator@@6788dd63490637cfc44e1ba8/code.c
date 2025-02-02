#include <stdio.h>
int main() {
    int a,b ,d,e,f,g;
    char sign;
    scanf("%d%d%c",&a ,&b ,&sign);
    if(sign == '+'){
        d=a+b;
        printf("%d",d);
    }
    else if(sign == '-'){
        e=a-b;
        printf("%d",e);
    }
    else if(sign == '*'){
        f=a*b;
        printf("%d",f);
    }
    else if(sign == '/'){
        g=a/b;
        printf("%d",g);
    }
    else{
        printf("error");
    }
    return 0;
}