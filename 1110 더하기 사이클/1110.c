#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int m=n;
    int count = 0;
    do
    {
        if(n<10){
            int one = n%10;
            int two = 0;
            int new = one+two;
            if(new>=10){
                n = (new%10) + one*10;
            }
            else{
                n = new + one*10;
            }
        }
        else{
            int one = n%10;
            int two = n/10;
            int new = one+two;
            if(new>=10){
                n = (new%10) + one*10;
            }
            else{
                n = new + one*10;
            }
        }
        count++;
    } while (m!=n);
    
    printf("%d", count);
    return 0;
}