#include <stdio.h>
int main(){
    int i=0, n, arr[1001]={};
    scanf("%d", &n);
    for(i=2; i<=1000; i+=7){
        arr[i]=1;
        arr[i-2]=1;
    }
    if(!arr[n]) printf("SK");
    else printf("CY");
    return 0;
}