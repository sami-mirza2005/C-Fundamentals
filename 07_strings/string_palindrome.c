#include<stdio.h>
#include<string.h>
int main()
{
    char b[100];
    scanf("%s",&b);
    int n=strlen(b);
int c=0;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
      if(b[i]==b[j])
      {
          c++;
      }
    }
if(n==c)
{
    printf("yes\n");
}
else
{
    printf("no\n");
}
}
