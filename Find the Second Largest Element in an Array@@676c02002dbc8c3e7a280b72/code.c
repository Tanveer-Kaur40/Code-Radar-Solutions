#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
   
    if (n < 2) {
        printf("-1\n");  
        return 1;
    }
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest, second_largest;

    largest = second_largest = -1; 
    

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == -1) {
        printf("-1\n");
    } else {
        printf("%d", second_largest);
    }
    
    return 0;
}
