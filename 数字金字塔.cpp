#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*n-1;j++)
		{
			if(i<n && j<=n)
			{
				if(i+j==n+1)
				{
					printf("%d",i%10);
				}
				else
				{
					printf(" ");
				}
			}
			else if(i<n && j>n)
			{
				if(j-i==n-1)
				{
					printf("%d",i%10);
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("%d",i%10);
			}
		}
		printf("\n");
	}
	return 0;
}
