#include <stdio.h>
int isPrime(int arr[], int n){
    int count =0;
   
    for(int i=0;i<n;i++){
        if(arr[i]<2) return 0;
        if(arr[i]%i==0) return 0;
        else count++;
    }
    printf("%d",count);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    isPrime(arr, n);
    return 0;
}