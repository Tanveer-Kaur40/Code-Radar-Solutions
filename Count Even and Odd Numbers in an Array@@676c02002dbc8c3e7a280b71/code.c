#include <stdio.h>
void evenOdd(int arr[], int N){
    int count = 0, count1 = 0;
    for(int i=0;i<N;i++){
        if(arr[i]%2 == 0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d %d",count,count1);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    evenOdd(arr, N);
    return 0;
}