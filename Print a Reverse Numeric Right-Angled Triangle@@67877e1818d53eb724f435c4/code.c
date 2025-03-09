#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}