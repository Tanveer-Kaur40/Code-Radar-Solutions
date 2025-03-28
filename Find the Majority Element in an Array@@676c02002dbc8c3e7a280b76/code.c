#include <stdio.h>
void count(int arr[],int N){
    int count = 1;
    for(int i=0;i<N;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    if (count > N / 2) {
            printf("%d", arr[i]);
            return;
        }
    else{
        printf("-1");
    }
}
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }
    countNum(arr, N);
    return 0;
}