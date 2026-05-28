#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",&a);
    int c=0;
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o' || a[i]=='u')
        {
            c++;
        }
    }
printf("%d",c);
}
