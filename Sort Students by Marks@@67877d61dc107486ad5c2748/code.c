#include <stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n], compareno;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rollno, s[i].name, s[i].marks);
        if(i==0 || compareno.marks > s[i].marks){
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",compareno.rollno, compareno.name, compareno.marks);
          
        }
    }
    return 0;
}