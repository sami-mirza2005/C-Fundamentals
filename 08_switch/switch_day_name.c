#include <stdio.h>
int main()
{
    int day=2;
    switch(day)
    {
    case 1:
        printf("Sun");
        break;
    case 2:
        printf("Mon");
        break;
    case 3:
        printf("Tue");
        break;
    default:
        printf("!Valid");
    }
}
