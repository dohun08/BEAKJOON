#include <stdio.h>
int main()
{
	int i, j, n, m=0, d[10000]={};
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &d[i]);
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(d[j]>d[j+1])
			{
				int temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	m=d[1]*d[n];
	printf("%d", m);
    return 0;
}