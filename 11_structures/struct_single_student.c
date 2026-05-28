#include<stdio.h>
struct student{
char name[50];
int id;
float cgpa;
};
int main()
{
    struct student s;
    scanf("%s",s.name);
    scanf("%d", &s.id);
    scanf("%f",&s.cgpa);
    printf("%s\n", s.name);
    printf("%d\n", s.id);
   printf("%f\n", s.cgpa);
}
