#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int d[10000] = {0};
    int count = 0;
    int m;
    for(int i=0; i<n; i++){
        scanf("%d", &m);
        if(!d[m]){
            d[m] = 1;
        }
        else{
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
