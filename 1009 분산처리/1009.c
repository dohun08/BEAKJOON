#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a%10==9){
            if(b%2){
                printf("9\n");
            }
            else{
                printf("1\n");
            }
        }
        else if(a%10==8){
            if(b%4==1) printf("8\n");
            else if(b%4==2) printf("4\n");
            else if(b%4==3) printf("2\n");
            else if(b%4==0) printf("6\n");
        }
        else if(a%10==7){
            if(b%4==1) printf("7\n");
            else if(b%4==2) printf("9\n");
            else if(b%4==3) printf("3\n");
            else if(b%4==0) printf("1\n");
        }
        else if(a%10==6){
            printf("6\n");
        }
        else if(a%10==5){
            printf("5\n");
        }
        else if(a%10==4){
            if(b%2) printf("4\n");
            else printf("6\n");
        }
        else if(a%10==3){
            if(b%4==1) printf("3\n");
            else if(b%4==2) printf("9\n");
            else if(b%4==3) printf("7\n");
            else if(b%4==0) printf("1\n");
        }
        else if(a%10==2){
            if(b%4==1) printf("2\n");
            else if(b%4==2) printf("4\n");
            else if(b%4==3) printf("8\n");
            else if(b%4==0) printf("6\n");
        }
        else if(a%10==1){
            printf("1\n");
        }
        else if(a%10==0){
            printf("10\n");
        }
    }
    
}