#include <stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n], findroll;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rollno, s[i].name, &s[i].marks);

    
    scanf("%d",&findroll);
    if(findroll == s[i].rollno){
        printf("Student found");
    }
    else {
        printf("Student not found");
    }
    }
    return 0;
}