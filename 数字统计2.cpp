#include<stdio.h>
int main()
{
	int a,b,c;
	int sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=b;i<=c;i++)
	{
		int temp=i;
		while(temp>0)
		{
			if(temp%10==a)
			{
				sum++;
			}
			temp/=10;
		}
	}
	printf("%d\n",sum);
}
