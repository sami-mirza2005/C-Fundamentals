#include<stdio.h>
int main()
{
    int a=10;
    int*b;
    b=&a;
    printf("%d %d\n",b,*b);
    *b=50;
    printf("%d %d",a,*b);
}
