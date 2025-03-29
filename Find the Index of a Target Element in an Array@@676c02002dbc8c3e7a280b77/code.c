#include <stdio.h>
void findIndex(int arr[], int n, int T){
    for(int i=0;i<n;i++){
       if(arr[i]==T){
        printf("%d",i);
       }
       else{
        printf("-1");
       }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",T);
    findIndex(arr[],n,T);
}