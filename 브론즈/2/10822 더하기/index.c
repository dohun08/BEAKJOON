#include <stdio.h>
int main()
{
	long long int total=0;
	int t, i, m=0, j, hundred=1, index, k;
	char s[1000000]={};
	scanf("%s", &s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			s[i]=s[i]-'0';
			m++;
		}
		if(s[i]==',') //, 로 구분되는 수 더해주기
		{
			index=m;
			for(k=1; k<=index; k++)
			{
				m--;
				for(j=0; j<m; j++)
				{
					hundred*=10;
				}
				total+=s[i-(m+1)]*hundred;
				hundred=1;
			}
			m=0;
		}
		if(s[i+1]=='\0') //마지막 수 더해주기
		{
			index=m;
			for(j=1; j<=index; j++)
			{
				m--;
				for(k=1; k<=m; k++)
					hundred*=10;
				total+=s[i-m]*hundred;
				hundred=1;
			}
		}
	}
	printf("%lld", total);
	return 0;
}