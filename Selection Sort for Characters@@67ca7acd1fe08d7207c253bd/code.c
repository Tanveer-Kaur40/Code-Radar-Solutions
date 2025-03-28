#include <stdio.h>
#include <string.h>

void selectionSort(char arr[], int n){
    int minIndex;
    char temp;
    for(int i=0;i<n;i++){
        minIndex = i;
    for(int j= i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
    }
}
void printArray(char arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
