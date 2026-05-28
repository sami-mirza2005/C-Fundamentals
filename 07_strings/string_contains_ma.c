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
        if(a[i]=='m'&& a[i+1]=='a')
        {
            c=1;
            break;
        }
    }
if(c==1)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
