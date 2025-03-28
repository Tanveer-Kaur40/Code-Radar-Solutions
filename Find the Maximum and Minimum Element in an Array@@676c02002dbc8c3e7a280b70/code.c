#include <stdio.h>
void finMinMax(int arr[], int N){
    int min = arr[0], max = arr[0];
    for(int i=0;i<N;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d %d",min, max);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    finMinMax(arr,N);
    return 0;
}