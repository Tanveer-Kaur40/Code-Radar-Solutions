#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            printf("%d",a);
        }
        for(int k=0;k<=i;k++){
            printf(" ");
            a++;
        }
        printf("\n");
    }
    return 0;
}