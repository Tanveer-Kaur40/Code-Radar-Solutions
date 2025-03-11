#include <stdio.h>
struct student {
    int rollno;
    char name[100];
    float marks;
}
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n], topstudent;
    for(int i=0;i<n;i++){
        scanf("%d %s %f", &s[i].rollno , s[i].name , &s[i].marks);
        if(i==0 || s[i].marks > topstudent.marks){
            topstudent == s[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",topstudent.rollno , topstudent.name, topstudent.marks);

    return 0;
}