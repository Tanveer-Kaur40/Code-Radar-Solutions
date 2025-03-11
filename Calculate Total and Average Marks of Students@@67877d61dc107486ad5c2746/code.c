#include <stdio.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n], averagemarks;
    int total =0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",s[i].rollno, s[i].name, s[i].marks);
        total += s[i].marks;
        averagemarks = total/n;
        }
        printf("Total Marks: %.2f\n",total);
        printf("Average Marks: %.2f",averagemarks);
        return 0;
}