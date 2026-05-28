#include <stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
    {
        switch(i)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Hi\n");
            break;
        default:
            printf("Bye");
        }
    }
}
