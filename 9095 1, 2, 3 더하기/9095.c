#include <stdio.h>
int memo[10000] = {0, 1, 2, 4};
int f(int k){
    if(memo[k]) return memo[k];
    else return memo[k] = f(k-1) + f(k-2) + f(k-3);
}
int main(){
    int n;
    scanf("%d", &n);
    int m;
    for(int i=0; i<n; i++){
        scanf("%d", &m);
        printf("%d\n", f(m));
    }
    return 0;
}