#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        int a = 1;
        for(int j=1;j<=i;j++){
            int d = a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}