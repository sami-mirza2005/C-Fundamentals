#include<stdio.h>
struct info{
char name[50];
int id;
float cgpa;
};
int main()
{
    struct info s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.id);
    scanf("%f",&s1.cgpa);
    printf("name: %s\nid: %d\ncgpa: %f\n",s1.name,s1.id,s1.cgpa);
}
