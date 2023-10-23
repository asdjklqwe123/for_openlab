#include <stdio.h>
int main()
{
	int m=1;
	int sum=0;
	int i=1;
	int n=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=m*i;
		sum=sum+m;
	}
	printf("%d\n",sum);
	return 0;
}
