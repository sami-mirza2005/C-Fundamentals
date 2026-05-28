#include<stdio.h>
int main()
{
    int a,b;
    char d;
    scanf("%d%d %c",&a,&b,&d);
    switch(d)
    {
    case'+':
        printf("%d",a+b);
        break;
    case'-':
        printf("%d",a-b);
        break;
    case'*':
        printf("%d",a*b);
        break;
    case'/':
        printf("%d",a/b);
        break;
    case'%':
        printf("%d",a%b);
        break;
    default:
        printf("Invalid");
    }
}
