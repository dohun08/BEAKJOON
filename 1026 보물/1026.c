#include <stdio.h> 
int main()
{
	int i, j, n, m=0, a[10000]={}, b[10000]={};
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
		scanf("%d", &b[i]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(b[j]<b[j+1])
			{
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		m+=a[i]*b[i];
	}
	printf("%d", m);
	return 0;
}