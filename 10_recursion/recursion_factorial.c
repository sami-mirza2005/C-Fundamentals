#include<stdio.h>
int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    printf("%d",factorial(n));
}
