#include <stdio.h>
void peakElement(int arr[], int N){
    int temp;
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        else{
            temp = arr[i+1];
        }
    }
    printf("%d",arr[i]);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    peakElement(arr,N);
    return 0;
}