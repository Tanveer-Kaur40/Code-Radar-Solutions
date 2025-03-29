#include <stdio.h>
void findSecondLargest(int arr[], int N){
    int largest , second_largest;
    if(arr[0]>arr[1]){
        largest = arr[0];
        second_largest = arr[1];
    }
    else{
        largest = arr[1];
        second_largest = arr[0];
    }
    for(int i=0;i<N;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    printf("%d",second_largest);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    findSecondLargest(arr, N); 

    return 0;
}
