#include <stdio.h>
int main()
{
	int i=1, j, n, m=1000000, x, y, w, h, d[10]={};	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	d[1]=w-x;
	d[2]=h-y;
	d[3]=x;
	d[4]=y;
	for(i=1; i<=4; i++)
	{
		if(m>d[i]) m=d[i];
	}
	printf("%d", m);
    return 0;
}