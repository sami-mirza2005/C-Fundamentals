#include <stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
int main()
{
    int number;
    scanf("%d",&number);
    sum(number);
    printf("%d",sum(number));
}
