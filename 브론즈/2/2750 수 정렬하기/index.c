#include <stdio.h>
int main()
{
	int n, d[10000]={}, i, j;
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
	for(i=1; i<=n; i++)
	{
		printf("%d\n", d[i]);
	}
	return 0;
}