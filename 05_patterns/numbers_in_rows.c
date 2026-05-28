#include <stdio.h>
int main()
{
    for(int i=1;i<=12;i++)
    {
        printf("%d",i);
        if (i%3==0)
            printf("\n");
    }
}
