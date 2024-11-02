#include <stdio.h>
int main()
{
	int i, j, n, m;
	char num1[100000]={}, num2[10000]={}, num3[1000]={};
	scanf("%d", &n);
	scanf("%s", &num1);
	if(n==1) printf("%s", num1);
	for(i=2; i<=n; i++)
	{
		scanf("%s", &num2);
		for(j=0; num1[j]!='\0' && num2[j]!='\0'; j++)
		{
			if(num1[j]==num2[j])
			{
				num3[j]=num1[j];
			}
			else 
			{
				num3[j]='?';
				num1[j]='?';
			}
		}
	}
	for(int k=0; num3[k]!='\0'; k++)
	{
		printf("%c", num3[k]);
	}
	return 0;
}