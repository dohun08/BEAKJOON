#include <stdio.h>
int main(){
    
    int m;
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        int q = 0, d = 0, n =0, p=0;
        int a;
        scanf("%d", &a);
        while (a)
        {
            if(a-25>=0) a-=25, q++;
            else if(a-10>=0) a-=10, d++;
            else if(a-5>=0) a-=5, n++;
            else if(a-1>=0) a-=1, p++;
        }
        printf("%d %d %d %d\n", q, d, n, p);
    }
    return 0;
}