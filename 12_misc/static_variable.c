#include<stdio.h>
#include<stdlib.h>
// stack--initial no change
// data segment (Static) -initial changes
int Fun(){
    static int a=0;
    a++;
    return a;
}
int main(){
    printf("%d\n", Fun());
    printf("%d\n", Fun());
    printf("%d\n", Fun());
}
