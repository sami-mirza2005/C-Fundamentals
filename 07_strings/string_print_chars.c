#include <stdio.h>
#include<string.h>
int main(){
char name[50];
scanf("%s",&name);
int n=strlen(name);
for(int i=0;i<n;i++)
    {
        printf("%c",name[i]);
    }
}
