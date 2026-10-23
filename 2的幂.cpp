#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		unsigned long long a;
		scanf("%llu",&a);
		int sum=0;
		unsigned long long temp=a;
		while(temp>0)
		{
			sum+=(temp&1);
			temp=(temp>>1);
		}
		if(sum==1)
			printf("Y %llu\n",a);
		else
		    printf("N %llu\n",a);
	}
	return 0;
}
