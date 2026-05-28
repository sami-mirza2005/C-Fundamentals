#include <stdio.h>
int main()
{
    int value[5]={1,2,3,4,5};
    for(int i=0;i<5;i=i+1)
    {
        if(value[i]%2==1)
            printf("Super Num");
        else
            printf("Bad Num");
    }
}
