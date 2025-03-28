#include <stdio.h>
void sortArray(int arr[], int N){
    int temp;
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
        break;
        }
        else {
            printf("Sorted");
            break;
        }
    }
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sortArray(arr,N);
    
    return 0;
}