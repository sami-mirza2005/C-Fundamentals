#include<stdio.h>
int main()
{
    int c=0;
    for(int i=1;i<=50;i=i+1)
    {
        if(i%5==4)
        {
            c=c+1;
        }
    }
printf("%d",c);
}
