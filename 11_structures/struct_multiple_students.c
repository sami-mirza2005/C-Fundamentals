#include<stdio.h>
struct info{
char name[50];
int id;
float cgpa;
};
int main()
{
    printf("Number of students: ");
    int a;
    scanf("%d",&a);
    struct info student_no[a];
    for(int i=0;i<a;i++)
    {
    printf("Enter %d no student name: ",i);
    scanf("%s",student_no[i].name);
    printf("Enter %d no student id: ",i);
    scanf("%d", &student_no[i].id);
    printf("Enter %d no student cgpa: ",i);
    scanf("%f",&student_no[i].cgpa);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d no student name: %s\n",i,student_no[i].name);
    printf("%d no student id: %d\n",i,student_no[i].id);
    printf("%d no student cgpa: %f\n",i,student_no[i].cgpa);
    }
}
