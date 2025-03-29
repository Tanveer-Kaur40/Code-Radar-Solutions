#include <stdio.h>
void moveZero(int arr[], int n){
    int zero = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == zero){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("%d",arr);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    moveZero(arr,n);
    return 0;
}