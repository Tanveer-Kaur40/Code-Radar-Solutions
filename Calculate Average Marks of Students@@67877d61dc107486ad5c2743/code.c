#include <stdio.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct student s[n];
    float sum = 0; 

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
        sum += s[i].marks; 
    }
    float averagemarks = sum / n; 
    printf("Average Marks: %.2f\n", averagemarks); 
    return 0;
}
