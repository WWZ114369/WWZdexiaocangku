#include<stdio.h>
int main(void)
{
	int N;
	long long sum[51]={0};
	scanf("%d",&N);
	sum[1]=1;
	for(int i=2;i<=N;i++)
	{
		sum[i]=sum[i-1]+sum[i-2];
	}
	printf("%lld\n",sum[N]);
	return 0;
}
