#include <stdio.h>
int main(){
    int i=0, n, a=0, b=0;
    scanf("%d", &n);
    while(a+b!=n){
        if(i%2==0){
            if(a+3+b<=n) a+=3;
            else if(a+1+b <= n) a+=1;
        }
        else if(i%2==1){
            if(a+3+b<=n) b+=3;
            else if(a+1+b <= n) b+=1;
        }
        i++;
    }
    if(i%2==1) printf("SK");
    else printf("CY");
    return 0;
}