#include <stdio.h>
#include <math.h>
int main()
{
   float a,b;
   scanf("%f%f",&a,&b);
   float output=fmod(a,b);
   printf("%f",output);
   return 0;
}
