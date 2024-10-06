#include <stdio.h>
int main(){
    int i, n, m, num;
    scanf("%d %d", &n, &m);
    num=n;
    for(i=0; i<m; i++){
        num+=n;
    }
    printf("%d", num);
    return 0;
}