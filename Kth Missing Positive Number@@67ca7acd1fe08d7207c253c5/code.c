#include <stdio.h>
int findKthMissing(int arr[], int n, int k){
    int count = 0;
    int current = 1;
    int i=0;

    while(1){
        if(i<n && arr[i] == current){
            i++;
        }
        else{
            count++;
            if(count == k){
                printf("%d\n", current);
                break;
            }
        }
        current++;
    }
}