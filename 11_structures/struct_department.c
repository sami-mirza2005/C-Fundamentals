#include<stdio.h>
struct authority{
char dept_name[50];
int student_no;
int total_batch;
int teacher_no;
};
int main()
{
    struct authority dept[2];
    for(int i=0;i<2;i++)
    {
    scanf("%s",dept[i].dept_name);
    scanf("%d", &dept[i].student_no);
    scanf("%d",&dept[i].total_batch);
    scanf("%d",&dept[i].teacher_no);
    }
    for(int i=0;i<2;i++)
    {
    printf("%s\n",dept[i].dept_name);
    printf("%d\n", dept[i].student_no);
    printf("%d\n",dept[i].total_batch);
    printf("%d\n",dept[i].teacher_no);
    }
}
