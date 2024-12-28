#include <stdio.h>

long long int p(long long int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else{
        return p(n-1)+p(n-2);
    }
}

int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%lld", p(n));
    return 0;
}
