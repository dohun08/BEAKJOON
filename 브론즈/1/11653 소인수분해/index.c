#include <stdio.h>
int main()
{
	long long int i, j, ss=0, index=3, n;
	scanf("%lld", &n);
	while(n>1)
	{
		for(i=2; i<=n; i++)
		{
			if(n%i==0)
			{
				printf("%d\n", i);
				n/=i;
				break;
			}
		}
	}
	return 0;
}