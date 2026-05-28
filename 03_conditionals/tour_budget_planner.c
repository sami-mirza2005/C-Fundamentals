#include<stdio.h>
int main()
{
    int taka;
    printf("Enter amount of taka: ");
    scanf("%d",&taka);
    if (taka >=5000)
    printf("Cox's Bazar");
    else if (taka >=4000)
    printf("Tanguar Hour");
    else if (taka >=1000)
    printf("Sreemongol");
    else printf("Ghurar dorkar nai");
    return 0;
}
