#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
        scanf("%d",&b[i]);
    int max=b[0];
    for(int i=0;i<a;i++)
        if(b[i]>max)
    {
        max=b[i];
    }
    printf("%d",max);
}
