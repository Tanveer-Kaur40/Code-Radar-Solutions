#include <stdio.h>
int totalLikes(int n) {
    int shared = 5;    
    int liked = 0;    

    for(int i = 1; i <= n; i++) {
        int currentLikes = shared / 2; 
        liked += currentLikes;
        shared = currentLikes * 3; 
    }

    return liked;
}