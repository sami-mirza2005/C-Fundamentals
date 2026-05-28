#include <stdio.h>
int main()
{
    int n=7;
    int arr[]={60,70,20,10,30,50,40};
    int mx=0;

    for (int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    int secMx=0;
    for (int i=0;i<n;i++){
        if(arr[i]==mx)
            continue;
        if(arr[i]>secMx){
            secMx=arr[i];
        }
    }
    printf("Secd Max:%d",secMx);
}
