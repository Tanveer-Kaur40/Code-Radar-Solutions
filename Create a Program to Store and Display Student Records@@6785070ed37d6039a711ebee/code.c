#include <stdio.h>
struct student{
    int rollnumber;
    char name;
    float marks;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student students[N];
    for(int i=1;i<=N;i++){
        scanf("%d %s %.2f",&students[i].rollnumber, students[i].name, &students[i].marks);
    }
    for(int i=1;i<=N;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].rollnumber, students[i].name, students[i].marks);
    }
    return 0;
}
