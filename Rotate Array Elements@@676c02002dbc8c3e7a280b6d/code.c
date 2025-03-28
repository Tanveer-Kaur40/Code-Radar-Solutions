#include <stdio.h>
void movePosition(int N, int arr[], int K) {
    int temp[N]; 
    K = K % N;

    for (int i = 0; i < K; i++) {
        temp[i] = arr[N - K + i];
    }

    for (int i = N - 1; i >= K; i--) {
        arr[i] = arr[i - K];
    }
    for (int i = 0; i < K; i++) {
        arr[i] = temp[i];
    }
}


void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Fixed scanf
    }

    int K;
    scanf("%d", &K);

    movePosition(N, arr, K);  // Fixed function call
    printArray(arr, N);       // Fixed function call

    return 0;
}
